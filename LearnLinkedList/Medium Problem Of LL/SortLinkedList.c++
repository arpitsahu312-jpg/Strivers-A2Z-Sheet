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
        cout<<head->data<<",";
        head=head->next;
    }
    return;
}

ListNode* SortLinkedList(ListNode* head)
{
    if(head==nullptr || head->next==nullptr) return head;
    ListNode* zerohead=new ListNode(-1);
    ListNode* onehead=new ListNode(-1);
    ListNode* twohead=new ListNode(-1);
    ListNode* zero=zerohead;
    ListNode* one=onehead;
    ListNode* two=twohead;

    while(head!=nullptr)
    {
        if(head->data==0)
        {
            zero->next=head;
            zero=zero->next;
        }
        else if(head->data==1)
        {
            one->next=head;
            one=one->next;
        }
        else
        {
            two->next=head;
            two=two->next;
        }
        head=head->next;
    }
    zero->next=(onehead->next!=nullptr)?onehead->next:twohead->next;
    one->next=twohead->next;
    two->next=nullptr;
    return zerohead->next;
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
    head=SortLinkedList(head);
    cout<<"The sorted linked list is:"<<endl;
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}