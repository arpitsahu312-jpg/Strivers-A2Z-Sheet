#include<bits/stdc++.h>
using namespace std;

struct Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};



Node* copyRandomList(Node* head) {
    Node* h1=head;
    unordered_map<Node*, Node*>mpp;
    Node* Dummy=new Node(0);
    Node* prev=Dummy;
    while(head!=nullptr)
    {
        Node* temp=new Node(head->val);
        prev->next=temp;
        mpp[head]=prev->next;
        prev=prev->next;
        head=head->next;
    }
    Node* h2=Dummy->next;
    while(h1!=nullptr)
    {
        if(h1->random==nullptr)
        {
            h2->random=nullptr;
        }
        else
        {
            auto i=mpp.find(h1->random);
            h2->random=i->second;
        }
        h1=h1->next;
        h2=h2->next;
    }
    Node* newhead=Dummy->next;
    delete Dummy;
    return newhead;
}

void traversalLinkedList(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->val<<",";
        head=head->next;
    }
    return;
}

int main()
{
    Node* head=new Node(7);
    Node* h1=new Node(13);
    Node* h2=new Node(11);
    Node* h3=new Node(10);
    Node* h4=new Node(1);
    head->next=h1;
    h1->next=h2;
    h1->random=head;
    h2->next=h3;
    h2->random=h4;
    h3->next=h4;
    h3->random=h2;
    h4->random=h1;
    traversalLinkedList(copyRandomList(head));
    return 0;
}