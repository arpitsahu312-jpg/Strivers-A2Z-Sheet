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


void ConverttoCyclicLinkedList(ListNode* head,int pos)
{
    ListNode* temp=nullptr;
    ListNode* h1=head;
    int cnt=0;
    while(head!=nullptr)
    {
        if(cnt==pos)
        {
            temp=head;
        }
        cnt++;
        h1=head;
        head=head->next;
    }
    h1->next=temp;
    return;
}

ListNode* detectCycleStarting(ListNode *head) {
        if(head==nullptr || head->next==nullptr) return 0;
        ListNode* i=head;
        ListNode* j=head;
        while(j!=nullptr && j->next!=nullptr)
        {
            i=i->next;
            j=j->next->next;
            if(i==j)
            {
              i=head;
              while(i!=j)
              {
                i=i->next;
                j=j->next;
              }
              return i;
            }
        }
        return nullptr;
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
    int pos;
    cout<<"Enter the position:"<<endl;
    cin>>pos;
    ListNode* head=ArraytoLinkedList(arr);
    ConverttoCyclicLinkedList(head,pos);
    cout<<detectCycleStarting(head)->data<<endl; 
    return 0;
}