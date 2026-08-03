
#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  public:
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

int lengthoflinkedlist(ListNode* head)
{
    int cnt=0;
    while(head!=nullptr)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}
ListNode* rotateRight(ListNode* head, int k) {
    if(head==nullptr || head->next==nullptr) return head;
    int n=lengthoflinkedlist(head);
    k=k%n;
    if(k==0) return head;
    ListNode* slow=head;
    ListNode* fast=head;
    for(int i=0;i<k;i++)
    {
        fast=fast->next;
    }
    while(fast->next!=nullptr)
    {
        fast=fast->next;
        slow=slow->next;
    }
    fast->next=head;
    head=slow->next;
    slow->next=nullptr;
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
    cout<<"Enter the value of K:"<<endl;
    int k;
    cin>>k;
    ListNode* head=ArraytoLinkedList(arr);
    head=rotateRight(head,k);
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}