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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
ListNode* temp1=headA;
ListNode* temp2=headB;
while(temp1!=temp2)
{
    temp1=temp1->next;
    temp2=temp2->next;
    if(temp1==temp2) return temp1;
    if(temp1==nullptr) temp1=headB;
    if(temp2==nullptr) temp2=headA;
}
return temp1;
}

int main()
{
    ListNode* headA= new ListNode(4);
    ListNode* a2= new ListNode(1);
    headA->next=a2;
    ListNode* c1= new ListNode(8);
    a2->next=c1;
    ListNode* c2= new ListNode(4);
    c1->next=c2;
    ListNode* c3= new ListNode(5);
    c2->next=c3;
    ListNode* headB= new ListNode(5);
    ListNode* b2= new ListNode(6);
    headB->next=b2;
    ListNode* b3= new ListNode(1);
    b2->next=b3;
    b3->next=c1;
    cout<<getIntersectionNode(headA,headB)<<endl;
    return 0;
}