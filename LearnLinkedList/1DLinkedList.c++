// Learning linked list 
/*
    Linked list is a similar data structure as array. The nodes are not stored in contigeous memory location. There size can be changed dynamically. The linked list element stores two fields the data tpo be stored and the memeory location of the next node.

    The starting point of the linked list is called the head of the linked list. We use the head to traverse any linked list.
    The last node of th linked list points to nullptr.

    It is used in stack and queue data structures. In real life we use it in the browser (2D linked list).
*/

/*
    int x=2; -> stores a value 2 at a random memory m1 named as x.
    int* y=&x; -> stores the address of the x (m1). y is known as pointer to x.
    cout<<y; // 0x61ff08
*/

/*
   For defining a data type linked list we  use the struct , which helps us define out own/ self defined data structures.

   struct Node
   {
      int data;
      Node* next;
      Node(data1,next1)
      {
        data=data1;
        next=next1;
      }
   };

*/

#include<bits/stdc++.h>
using namespace std;

struct ListNode // we can also use class instead of struct it helps in adding oops operation which struct doesn't offers.
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

ListNode* ArraytoLinkedList(vector<int>&arr)   // O(N) time compexity
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

void traversalLinkedList(ListNode* head)  // O(N) time compexity
{
    while(head!=nullptr)
    {
        cout<<head->data<<",";
        head=head->next;
    }
    return;
}

int LengthofLinkedList(ListNode* head)  // O(N) time compexity
{
    int cnt=0;
    while(head!=nullptr)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

bool searchinLinkedList(ListNode* head, int elem) // O(N) time compexity
{
    while(head!=nullptr)
    {
        if(head->data==elem) return true;
        head=head->next;
    }
    return false;
}

ListNode* deleteHead(ListNode* head) // O(1) time compexity
{
    if(head==nullptr) return nullptr;
    ListNode* temp=head;
    head=head->next;
    delete temp;
    return head;
}

ListNode* deleteTail(ListNode* head) // O(N) time compexity
{
    if(head==nullptr || head->next==nullptr) return nullptr;
    ListNode* h1=head;
    while(h1->next->next!=nullptr)
    {
        h1=h1->next;
    }
    delete h1->next;
    h1->next=nullptr;
    return head;
}

ListNode* deleteNode(ListNode* head, int num) // O(N) time compexity
{
   if(head==nullptr) return nullptr;
   if(num==1)
   {
      ListNode* temp=head->next;
      delete head;
      return temp;
   }
   ListNode* h1=head;
   ListNode* prev=nullptr;
   int cnt=0;
   while(h1!=nullptr)
   {
     cnt++;
     if(cnt==num)
     {
        prev->next=h1->next;
        delete h1;
        break;
     }
     prev=h1;
     h1=h1->next;
   }
   return head;
}


ListNode* deleteNode2(ListNode* head, int value) // O(N) time compexity
{
   if(head==nullptr) return nullptr;
   if(head->data==value)
   {
      ListNode* temp=head->next;
      delete head;
      return temp;
   }
   ListNode* h1=head;
   ListNode* prev=nullptr;
   while(h1!=nullptr)
   {
     if(h1->data==value)
     {
        prev->next=h1->next;
        delete h1;
        break;
     }
     prev=h1;
     h1=h1->next;
   }
   return head;
}

ListNode* Insertionhead(ListNode* head,int value) // O(1) time compexity
{
   ListNode* temp=new ListNode(value);
   temp->next=head;
   head=temp;
   return head;
}

ListNode* InsertionTail(ListNode* head,int value) // O(N) time compexity
{
   ListNode* node=new ListNode(value);
   if(head==nullptr) return node;
   ListNode* temp=head;
   while(temp->next!=nullptr)
   {
     temp=temp->next;
   }
   temp->next=node;
   return head;
}

ListNode* Insertionposition(ListNode* head,int pos, int value) // O(N) time compexity
{
   ListNode* node=new ListNode(value);
   if(head==nullptr || pos==1)
   {
    node->next=head;
    return node;
   }
   ListNode* temp=head;
   ListNode* prev=nullptr;
   int cnt=0;
   while (temp!=nullptr)
   {
     cnt++;
     if(cnt==pos)
     {
        prev->next=node;
        node->next=temp;
        break;
     }
     prev=temp;
     temp=temp->next;
   }
   if(temp==nullptr)
   {
    prev->next=node;
   }
   return head;
}

ListNode* Insertionvalue(ListNode* head,int v1, int value) // O(N) time compexity
{
   ListNode* node=new ListNode(value);
   if(head==nullptr || head->data==v1)
   {
    node->next=head;
    return node;
   }
   ListNode* temp=head;
   ListNode* prev=nullptr;
   while (temp!=nullptr)
   {
     if(temp->data==v1)
     {
        prev->next=node;
        node->next=temp;
        break;
     }
     prev=temp;
     temp=temp->next;
   }
   if(temp==nullptr)
   {
    prev->next=node;
   }
   return head;
}

int main()
{
   vector<int> arr={2,5,8,7,9,11};
   ListNode x= ListNode(arr[0]); // x is an object and to acess its field we use . sign.
   ListNode* y= new ListNode(arr[0]); // y is a pointer to an object for acessing the field in object we use -> sign.
   cout<<x.data<<" "<<x.next<<endl;
   cout<<y->data<<" "<<y->next<<endl;
   ListNode* head=ArraytoLinkedList(arr);
   cout<<head<<endl;
   traversalLinkedList(head);
   cout<<"\n";
   cout<<"Length of Linked List is:"<<LengthofLinkedList(head)<<endl;
   cout<<searchinLinkedList(head,5)<<endl;
   cout<<searchinLinkedList(head,15)<<endl;
   head=deleteNode(head,2);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteNode(head,1);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteNode(head,5);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteHead(head);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteTail(head);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteNode2(head,9);
   traversalLinkedList(head);
   cout<<endl;
   head=deleteNode2(head,10);
   traversalLinkedList(head);
   cout<<endl;
   head=Insertionhead(head,10);
   traversalLinkedList(head);
   cout<<endl;
   head=InsertionTail(head,50);
   traversalLinkedList(head);
   cout<<endl;
   head=Insertionposition(head,1,20);
   traversalLinkedList(head);
   cout<<endl;
   head=Insertionposition(head,3,100);
   traversalLinkedList(head);
   cout<<endl;
   head=Insertionposition(head,10,8);
   traversalLinkedList(head);
   cout<<endl;
   head=Insertionvalue(head,10,18);
   traversalLinkedList(head);
   cout<<endl;
   return 0;
}