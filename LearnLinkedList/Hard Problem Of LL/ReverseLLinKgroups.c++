
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

ListNode* reverseList(ListNode* head) {
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

ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* DummyNode=new ListNode(0,head);
    ListNode* prev=DummyNode;
    int cnt=1;
    ListNode* start=head;
    ListNode* end=head;
    while(start!=nullptr)
    {
        while(end!=nullptr && cnt<k)
        {
            end=end->next;
            cnt++;
        }
        if(cnt==k && end!=nullptr)
        {
            ListNode* temp=end;
            end=end->next;
            temp->next=nullptr;
            prev->next=reverseList(start);
            prev=start;
            start=end;
            cnt=1;
        }
        else
        {
            prev->next=start;
            start=end;
        }
    }
    ListNode* newhead=DummyNode->next;
    DummyNode->next=nullptr;
    delete DummyNode;
    return newhead;
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
    head=reverseKGroup(head,k);
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}