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
    //delete node nth from end
    Node * deletenthfromend(Node* head,int n){
        if(head==NULL){
            return NULL;
        }
       
        int count=0;
        Node*temp=head;
        while (temp!=nullptr)
        {
            count+=1;
            temp=temp->next;
        }
          if(head->next=nullptr){
            if(count==n){
                delete head;
                return nullptr;
            }
        }
        int orcount=count-n;
        temp=head;
        while (orcount!=1)
        {
            temp=temp->next;
            orcount-=1;
        }
        delete temp->next;
        temp->next=temp->next->next;
        return head;
        
        
    }

 





int main(){
    vector<int>arr={3,5,6,9};
    Node* head=arraytodoublyLL(arr);
    head=(head);
    Node*temp=head;

    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

    


    return 0;
}