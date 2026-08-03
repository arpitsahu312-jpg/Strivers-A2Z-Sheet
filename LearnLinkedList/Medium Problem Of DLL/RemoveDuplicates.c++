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

DLLNode* RemoveDuplicates(DLLNode* head)
{
    if(head==nullptr || head->next==nullptr) return head;
    DLLNode* temp1=head;
    while(temp1!=nullptr && temp1->next!=nullptr)
    {
       DLLNode* temp2=temp1->next;
       while(temp2!=nullptr && temp1->data==temp2->data)
       {
         DLLNode* t=temp2;
         temp2=temp2->next;
         delete t;
       }   
       temp1->next=temp2;
       if(temp2!=nullptr)
       {
        temp2->prev=temp1;
       }
       temp1=temp1->next;
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
    head=RemoveDuplicates(head);
    traversalDLL(head);
    cout<<endl;
    return 0;
}