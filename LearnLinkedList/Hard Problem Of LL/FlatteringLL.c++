#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
  public:
  int data;
  ListNode* next;
  ListNode* child;

  ListNode(int data1,ListNode* next1,ListNode* child1)
  {
    data=data1;
    next=next1;
    child=child1;
  }
  
  ListNode(int data1,ListNode* child1)
  {
    data=data1;
    next=nullptr;
    child=child1;
  }

  ListNode(int data1)
  {
    data=data1;
    next=nullptr;
    child=nullptr;
  }
};

void traversalLinkedList(ListNode* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<",";
        head=head->child;
    }
    return;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* head;
      ListNode* ref;
      if(list1 == NULL) return list2;
      else if(list2==NULL) return list1;
      else if(list1->data < list2->data)
      {
          head=list1;
          list1=list1->child;
      }
      else
      {
          head=list2;
          list2=list2->child;
      }
      ref=head;
      while(list1 != NULL && list2 !=NULL)
      {
          if(list1->data <= list2->data)
          {
            
            head->child=list1;
            list1=list1->child; 
            head=head->child;
          }
          else
          {
              head->child=list2;
              list2=list2->child;
              head=head->child;
          }

      }
      if(list1 == NULL && list2 !=NULL)
      {
          head->child=list2;
      }
      if(list1 != NULL && list2 ==NULL)
      {
          head->child=list1;
      }
      ref->next=nullptr;
      return ref;
  }

ListNode* flattenLinkedList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rightHalf = slow->next;
        slow->next = nullptr; 

        ListNode* leftFlattened = flattenLinkedList(head);
        ListNode* rightFlattened = flattenLinkedList(rightHalf);

        return mergeTwoLists(leftFlattened, rightFlattened);
    }

int main()
{
    ListNode* head=new ListNode(3);
    ListNode* h1=new ListNode(2);
    head->next=h1;
    h1->child=new ListNode(10);
    h1->next=new ListNode(1);
    h1->next->child=new ListNode(7);
    h1->next->child->child=new ListNode(11);
    h1->next->child->child->child=new ListNode(12);
    h1->next->next= new ListNode(4);
    h1->next->next->child= new ListNode(9);
    h1->next->next->next= new ListNode(5);
    h1->next->next->next->child= new ListNode(6);
    h1->next->next->next->child->child= new ListNode(8);
    head=flattenLinkedList(head);
    traversalLinkedList(head);
    return 0;
}