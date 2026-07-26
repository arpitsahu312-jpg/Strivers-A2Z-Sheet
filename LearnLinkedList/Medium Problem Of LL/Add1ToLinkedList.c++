#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  int data;
  ListNode* next;

  ListNode(int data1,ListNode* next1)
  {
    data=data1;
    next=next1;
  }

  ListNode(int data1)
  {
    data=data1;
    next=nullptr;
  }
};

ListNode* ArraytoLinkedList(vector<int>&arr)   
{
     int size=arr.size();
     if(size==0) return nullptr;
     ListNode* head=new ListNode(arr[0]);
     ListNode* prev=head;
     for(int i=1;i<size;i++)
     {
        prev->next=new ListNode(arr[i]);
        prev=prev->next;
     }
     return head;
}

void traversalLinkedList(ListNode* head)  
{
    while(head!=nullptr)
    {
        cout<<head->data;
        head=head->next;
    }
    return;
}

int AddToLinkedList(ListNode* head)
{
    if(head==nullptr)
    {
        return 1;
    }
    int carry=AddToLinkedList(head->next);
    int sum=head->data+carry;
    head->data=sum%10;
    carry=sum/10;
    return carry;

}

ListNode* Add1ToLinkedList(ListNode* head)
{
   if(AddToLinkedList(head))
   {
    ListNode* temp= new ListNode(1);
    temp->next=head;
    return temp;
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
    ListNode* head=ArraytoLinkedList(arr);
    head=Add1ToLinkedList(head);
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}