/*
In the doubly linked list we can acess both the next and the prev node.
The head is the node whoese prev is nullptr and the tail is the one whoese next is nullptr. We can traverse a linked list from both the directions. Real life example(interlinked web pages)
*/

#include<bits/stdc++.h>
using namespace std;

struct DLLNode
{
    int data;
    DLLNode* next;
    DLLNode* prev;

    DLLNode(int data1,DLLNode* prev1,DLLNode* next1)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }

    DLLNode(int data1)
    {
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

DLLNode* ArraytoDLL(vector<int>&arr)   // O(N) time complexity
{
  int n=arr.size();
  DLLNode* head= new DLLNode(arr[0]);
  DLLNode* prev=head;
  for(int i=1;i<n;i++)
  {
    DLLNode* temp=new DLLNode(arr[i]);
    temp->prev=prev;
    prev->next=temp;
    prev=prev->next;
  }
  return head;
}

void traversalDLL(DLLNode* head)  // O(N) time complexity
{
    while(head!=nullptr)
    {
       cout<<head->data<<",";
       head=head->next;
    }
    return;
}

DLLNode* deletehead(DLLNode* head)   // O(1) time complexity
{
    if(head==nullptr || head->next==nullptr) return nullptr;
    DLLNode* temp=head;
    head=head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}

DLLNode* deletetail(DLLNode* head) // O(N) time complexity
{
    if(head==nullptr || head->next==nullptr) return nullptr;
    DLLNode* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;
}

DLLNode* deleteposition(DLLNode* head,int pos) // O(N) time complexity
{
   if(head==nullptr) return nullptr;
   if(pos==1)
   {
     if(head->next==nullptr) return nullptr;
     DLLNode* temp=head;
     head=head->next;
     head->prev=nullptr;
     temp->next=nullptr;
     delete temp;
     return head;
   }
   DLLNode* temp=head;
   int cnt=0;
   while(temp!=nullptr)
   {
      cnt++;
      if(cnt==pos)
      {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        break;
      }
      temp=temp->next;
   }
   return head;
}

DLLNode* deletevalue(DLLNode* head,int value) // O(N) time complexity
{
   if(head==nullptr) return nullptr;
   if(head->data==value)
   {
     if(head->next==nullptr) return nullptr;
     DLLNode* temp=head;
     head=head->next;
     head->prev=nullptr;
     temp->next=nullptr;
     delete temp;
     return head;
   }
   DLLNode* temp=head;
   while(temp!=nullptr)
   {
      if(temp->data==value)
      {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->next=nullptr;
        temp->prev=nullptr;
        delete temp;
        break;
      }
      temp=temp->next;
   }
   return head;
}

void deleteNode(DLLNode* node) // O(1) timecomplexity and condition that the node can't be the head of linked list
{
    DLLNode* back=node->prev;
    DLLNode* front=node->next;
    if(front==nullptr && back==nullptr)
    {
        delete node;
        return;
    }
    else if(front==nullptr)
    {
        back->next=nullptr;
        node->prev=nullptr;
        delete node;
        return;
    }
    back->next=front;
    front->prev=back;
    node->prev=node->next=nullptr;
    delete node;
    return;
}

DLLNode* insertionhead(DLLNode* head, int value) // O(1) time complexity
{
   DLLNode* temp= new DLLNode(value);
   temp->next=head;
   if(head!=nullptr)
   {
     head->prev=temp;
   }
   return temp;
}

DLLNode* insertiontail(DLLNode* head, int value) // O(N) time complexity
{
   DLLNode* temp= new DLLNode(value);
   DLLNode* h1=head;
   if(h1==nullptr) return temp;
   while(h1->next!=nullptr)
   {
    h1=h1->next;
   }
   h1->next=temp;
   temp->prev=h1;
   return head;
}

DLLNode* insertionposition(DLLNode* head, int value, int pos) // O(N) time complexity
{
  DLLNode* temp= new DLLNode(value);
  if(head==nullptr) return temp;
  if(pos==1)
  {
    temp->next=head;
    head->prev=temp;
    return temp;
  }
  DLLNode* h1=head;
  int cnt=0;
  while(h1!=nullptr)
  {
    cnt++;
    if(cnt==pos)
    {
        temp->next=h1->next;
        if(h1->next!=nullptr)
        {
          h1->next->prev=temp;
        }
        h1->next=temp;
        temp->prev=h1;
        break;
    }
    h1=h1->next;
  }
  return head;
}

DLLNode* insertionvalue(DLLNode* head, int value, int v1) // O(N) time complexity 
{
  DLLNode* temp= new DLLNode(value);
  if(head==nullptr) return temp;
  if(head->data==v1)
  {
    temp->next=head;
    head->prev=temp;
    return temp;
  }
  DLLNode* h1=head;
  while(h1!=nullptr)
  {
    if(h1->data==v1)
    {
        temp->next=h1->next;
        if(h1->next!=nullptr)
        {
          h1->next->prev=temp;
        }
        h1->next=temp;
        temp->prev=h1;
        break;
    }
    h1=h1->next;
  }
  return head;
}

void insertionnode(DLLNode* node,int value) // O(1) time complexity and the node isn't the head node
{ 
    DLLNode* back=node->prev;
    DLLNode* temp=new DLLNode(value,back,node);
    node->prev=temp;
    back->next=temp;
    return;
}

void searchDLL(DLLNode* head, int elem)  // O(N) time complexity
{
    while(head!=nullptr)
    {
        if(head->data==elem)
        {
            cout<<"elem is present!"<<endl;
            return;
        }
        head=head->next;
    }
    cout<<"elem is not present!"<<endl;
    return;
}

int LengthofDLL(DLLNode* head)  // O(N) time compexity
{
    int cnt=0;
    while(head!=nullptr)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

DLLNode* reverseDLL(DLLNode* head)
{
   DLLNode* curr=head;
   DLLNode* previous=nullptr;
   while(curr!=nullptr)
   {
    curr->prev=curr->next;
    curr->next=previous;
    previous=curr;
    curr=curr->prev;
   }
   return previous;
}

int main()
{
    vector<int> arr={2,5,8,7,9,11};
    DLLNode x= DLLNode(arr[0]); // x is an object and to acess its field we use . sign.
    DLLNode* y= new DLLNode(arr[0]); // y is a pointer to an object for acessing the field in object we use -> sign.
    cout<<x.data<<" "<<x.next<< " "<<x.prev<<endl;
    cout<<y->data<<" "<<y->next<<" "<<y->prev<<endl;
    DLLNode* head= ArraytoDLL(arr);
    cout<<head<<endl;
    traversalDLL(head);
    cout<<endl;
    searchDLL(head,9);
    searchDLL(head,15);
    cout<<LengthofDLL(head)<<endl;
    head=deletehead(head);
    traversalDLL(head);
    cout<<endl;
    head=deletetail(head);
    traversalDLL(head);
    cout<<endl;
    head=deleteposition(head,3);
    traversalDLL(head);
    cout<<endl;
    head=deleteposition(head,7);
    traversalDLL(head);
    cout<<endl;
    head=deletevalue(head,5);
    traversalDLL(head);
    cout<<endl;
    head=insertionhead(head,50);
    traversalDLL(head);
    cout<<endl;
    head=insertiontail(head,100);
    traversalDLL(head);
    cout<<endl;
    head=insertionposition(head,200,3);
    traversalDLL(head);
    cout<<endl;
    head=insertionvalue(head,400,100);
    traversalDLL(head);
    cout<<endl;
    deleteNode(head->next->next);
    traversalDLL(head);
    cout<<endl;
    insertionnode(head->next->next,300);
    traversalDLL(head);
    cout<<endl;
    traversalDLL(reverseDLL(head));
    cout<<endl;
    return 0;
}