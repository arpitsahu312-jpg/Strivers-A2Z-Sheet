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

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head->next; 
    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* Merge(ListNode* left, ListNode* right) {
    if(left == nullptr) return right;
    if(right == nullptr) return left;
    
    ListNode* head = nullptr;
    ListNode* tail = nullptr; 
    if(left->data <= right->data) {
        head = left;
        left = left->next;
    } else {
        head = right;
        right = right->next;
    }
    tail = head; 
    while(left != nullptr && right != nullptr) {
        if(left->data <= right->data) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }
        tail = tail->next; 
    }
    if(left != nullptr) tail->next = left;
    if(right != nullptr) tail->next = right;
    
    return head;
}

ListNode* MergeSort(ListNode* head) {
    if(head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* mid = middleNode(head);
    ListNode* rightHead = mid->next;
    mid->next = nullptr; 
    ListNode* leftSorted = MergeSort(head);
    ListNode* rightSorted = MergeSort(rightHead);
    return Merge(leftSorted, rightSorted);
}

ListNode* sortList(ListNode* head) {
    return MergeSort(head);
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
    head=sortList(head);
    cout<<"The sorted linked list is:"<<endl;
    traversalLinkedList(head);
    cout<<endl;
    return 0;
}

// Time complexity O(log(N).(N+N/2))
// Space Complexity O(1)

