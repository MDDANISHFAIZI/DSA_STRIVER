#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //contructors
    
    Node(int data1, Node* next1){
        data= data1;
        next = next1;
    }
    public:
    //if we dont need tp write the next and it is the last element the
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};
 Node* covertarraytoLL(vector<int>arr){
    if(arr.size()==0){
        return nullptr;
    }
        Node* head=new Node(arr[0]);
        Node* mover=head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node* temp=new Node(arr[i]);
            mover->next=temp;
            mover=temp;
            
        }
        return head;
        
    }
    Node* reverseLL(Node* head){
        Node* prev=nullptr;
        Node* temp=head;
        Node* front=nullptr;
        while (temp!=nullptr)
        {
            front=temp->next;

            temp->next=prev;
            prev=temp;
            temp=front;



        }
        return prev;
        

    }
    Node * add1number(Node * head){
        if(head==NULL){
            Node*first=new Node(1);
            head=first;
            return head;
        }
        head=reverseLL(head);
        Node* temp=head;
        int carry=1;
        while (temp!=nullptr)
        {
           int sum=temp->data + carry;
           temp->data=sum%10;
           carry=sum/10;
           if(carry==0){
            break;
           }
           //if carry
           if(temp->next==nullptr){
            Node* newNode= new Node(carry);
            temp->next=newNode;
            carry=0;
            break;
           }
           temp=temp->next;
          
           
        }
       


        
        head=reverseLL(head);
        return head;
        

    }
  
  


int main(){
    vector<int>vec={};
    Node* head=covertarraytoLL(vec);
    //deleting the head
     head=add1number(head);
    //  cout<<head->data;
     Node* temp=head;
     while (temp!=nullptr)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     
    
}