#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node*prev;
    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
   

};
 //array to doubly linkedlist coverter
   
    Node * arraytodoublyLL(vector<int>arr){
        if(arr.size()==0){
            return NULL;
        }
        Node* head= new Node(arr[0]);
        Node* prev=head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node* temp= new Node(arr[i],nullptr,prev);
            prev->next=temp;
            prev=temp;

        }
        return head;
        
    }
   //inserting element in the head
   Node* Insertinghead(Node* head,int el){
    if(head==NULL){
        return new Node(el);
    }
    Node*temp=new Node(el,head,nullptr);
    head->prev=temp;
    head=temp;
    return head;
    
    
   }

   //inserting in tail
   Node* insertingtail(Node* head,int el){
    if(head==NULL){
        return new Node(el);
    }
    Node* temp=head;
    

    while (temp!=nullptr)
    {
        if (temp->next==nullptr)
        {
            Node* tempu=new Node(el,nullptr,temp);
            temp->next=tempu;
            return head;

            
        }
        else{
            temp=temp->next;
        }
        
    }
    return head;
    
   }
   //inserting in kth position
   Node* insertingkth_el(Node* head,int el,int k){
    if(head==nullptr){
        if(k==1){
        return new Node(el);
        }
        return head;
    }
    else if(k==1){
        Node*temp=new Node(el,head,nullptr);
        head->prev=temp;
        head=temp;
        return head;

    }
    Node* temp=head;
    int count=1;
    while (temp!=nullptr)
    {
        if (temp->next==nullptr && count+1==k )
        {
            Node* tempu= new Node(el,nullptr,temp);
            temp->next=tempu;
            return head;
        }
        else if(count==k){
            Node*tempu= new Node(el,temp,temp->prev);
            temp->prev->next=tempu;
            temp->prev=tempu;
            return head;
        }
        else{
            count++;
            temp=temp->next;
        }
        
        

        
    }
    return head;
    

   }


    
        
 


int main(){
    vector<int>arr={4,5,6,9};
    Node* head=arraytodoublyLL(arr);
    Node* temp=insertingkth_el(head,10,4);

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return 0;
}