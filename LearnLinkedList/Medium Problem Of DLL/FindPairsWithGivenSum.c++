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

DLLNode* ArraytoDLL(vector<int>&arr)  
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

void traversalDLL(DLLNode* head)  
{
    while(head!=nullptr)
    {
       cout<<head->data<<",";
       head=head->next;
    }
    return;
}

vector<pair<int,int>> FindPairswithgivensum(DLLNode* head, int target)
{
    vector<pair<int,int>>ans;
    DLLNode* start=head;
    DLLNode* end=head;
    while(end->next!=nullptr)
    {
         end=end->next;
    }
    while(end->next!=start && start!=end)
    {
        if(start->data+end->data<target)
        {
           start=start->next;
        }
        else if(start->data+end->data>target)
        {
            end=end->prev;
        }
        else
        {
            ans.push_back({start->data,end->data});
            start=start->next;
            end=end->prev;
        }
    }
    return ans;
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
    DLLNode* head=ArraytoDLL(arr);
    traversalDLL(head);
    cout<<endl;
    int target;
    cout<<"Enter the target sum:"<<endl;
    cin>>target;
    vector<pair<int,int>> ans=FindPairswithgivensum(head,target);
    for(auto i:ans)
    {
        cout<<i.first<<","<<i.second<<endl;
    }
    return 0;
}