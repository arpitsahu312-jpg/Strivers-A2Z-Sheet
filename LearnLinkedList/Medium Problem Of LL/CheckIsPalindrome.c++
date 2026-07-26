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

void traversalLinkedList(ListNode* head)  
{
    while(head!=nullptr)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    return;
}

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

bool isPalindrome(ListNode* head) {
    if(!head || !(head->next)) return true;
    ListNode* h1=head;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* prev=nullptr;
    ListNode* curr=slow->next;
    while(curr)
    {
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    ListNode* h2=prev;
    while(h2!=NULL)
    {
        if(h1->data!=h2->data)
        {
            return false;
        }
        h1=h1->next;
        h2=h2->next;
    }
    return true;
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
    cout<<isPalindrome(head)<<endl;
    return 0;
}