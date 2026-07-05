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

    //reversing of DLL using stack
    
    Node* reverseDLL(Node*head){
        stack<int>st;
        Node* temp=head;
        while (temp!=nullptr)
        {
            st.push(temp->data);
            temp=temp->next;

        }
        temp=head;
        while (temp!=nullptr)
        {
            temp->data=st.top();
            st.pop();
            temp=temp->next;

        }
        return head;

        

    }






int main(){
    vector<int>arr={3,5,6,9};
    Node* head=arraytodoublyLL(arr);
    head=reverseDLL(head);
    Node*temp=head;

    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

    


    return 0;
}