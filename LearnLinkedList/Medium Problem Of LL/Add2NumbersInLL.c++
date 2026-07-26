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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=new ListNode(0);
        ListNode* temp=h1;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr || carry)
        {
            int sum=0;
            if(l1!=nullptr)
            {
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=nullptr)
            {        
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            ListNode* node=new ListNode(sum%10);
            carry=sum/10;
            temp->next=node;
            temp=temp->next;
        }
        return h1->next;
}

int main()
{
    int n1;
    cout<<"Enter the number of nodes in the linked list:"<<endl;
    cin>>n1;
    vector<int> arr1(n1,0);
    cout<<"Enter the values of the nodes:"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the number of nodes in the linked list:"<<endl;
    cin>>n2;
    vector<int> arr2(n2,0);
    cout<<"Enter the values of the nodes:"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    ListNode* head1=ArraytoLinkedList(arr1);
    ListNode* head2=ArraytoLinkedList(arr2);
    ListNode* head=addTwoNumbers(head1,head2);
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}