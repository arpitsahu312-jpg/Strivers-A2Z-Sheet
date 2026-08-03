#include<bits/stdc++.h>
using namespace std;

struct DLLNode
{
    int data;
    DLLNode* next;
    DLLNode* prev;

    DLLNode(int data1,DLLNode* prev1,DLLNode* next1)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }

    DLLNode(int data1)
    {
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

DLLNode* ArraytoDLL(vector<int>&arr)  
{
  int n=arr.size();
  DLLNode* head= new DLLNode(arr[0]);
  DLLNode* prev=head;
  for(int i=1;i<n;i++)
  {
    DLLNode* temp=new DLLNode(arr[i]);
    temp->prev=prev;
    prev->next=temp;
    prev=prev->next;
  }
  return head;
}

void traversalDLL(DLLNode* head)  
{
    while(head!=nullptr)
    {
       cout<<head->data<<",";
       head=head->next;
    }
    return;
}

DLLNode* deleteallocurrences(DLLNode* head, int target)
{
    DLLNode* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==target)
        {
          DLLNode* t1=temp;
          temp=temp->next;
          if(t1->prev!=nullptr)
          {
            t1->prev->next=t1->next;
          }
          else
          {
            head=t1->next;
          }
          if(t1->next!=nullptr)
          {
            t1->next->prev=t1->prev;
          }
          t1->prev=nullptr;
          t1->next=nullptr;
          delete t1;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}

int main()
{
    int n;
    cout<<"Enter the number of nodes in the linked list:"<<endl;
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter the values of the nodes:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    DLLNode* head=ArraytoDLL(arr);
    traversalDLL(head);
    cout<<endl;
    int target;
    cout<<"Enter the target value to be deleted:"<<endl;
    cin>>target;
    head=deleteallocurrences(head,target);
    traversalDLL(head);
    cout<<endl;
    return 0;
}