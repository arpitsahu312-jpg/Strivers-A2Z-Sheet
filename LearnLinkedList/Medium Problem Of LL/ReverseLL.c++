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

ListNode* reverseListrecursive(ListNode* head) {
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    ListNode* Newhead=reverseListrecursive(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=nullptr;
    return Newhead;
}

ListNode* reverseListiterative(ListNode* head) {
    if(!head) return head;
    ListNode* prev=nullptr;
    ListNode* curr=head;
    while(curr)
    {
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
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
    ListNode* h1=reverseListiterative(head);
    head=ArraytoLinkedList(arr);
    ListNode* h2=reverseListrecursive(head);
    traversalLinkedList(h1);
    cout<<endl;
    traversalLinkedList(h2);
    return 0;
}