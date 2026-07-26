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

ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr) return head;
        ListNode* Odd=head;
        ListNode* Even=head->next;
        ListNode* h1=Even;
        ListNode* prev=nullptr;
        while(Even!=nullptr || Odd!=nullptr)
        { 
            if(Odd!=nullptr)
            {
                Odd->next=(Odd->next==nullptr)?nullptr:Odd->next->next;
                prev=Odd;
                Odd=Odd->next;
            }
            if(Even!=nullptr)
            {
               Even->next=(Even->next==nullptr)?nullptr:Even->next->next;
               Even=Even->next;
            }
        }
        prev->next=h1;
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
    ListNode* h1=oddEvenList(head);
    traversalLinkedList(h1);
    cout<<endl;
    return 0;
}