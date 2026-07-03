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
    //deleting the head of doublylinkedlist
    Node* Deletinghead(Node*head){
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node* prev= head;
        head= head->next;
        head->prev=nullptr;
        prev->next=nullptr;
        delete prev;
        return head;
    }
    //deleting the tail of doblylinkedlist
    Node* deletingtail(Node* head){
        if(head==NULL){
            return nullptr;
        }
        if(head->next==nullptr){
            delete head;
            return nullptr;
        }
        Node* temp= head;
        while (temp!=nullptr)
        {
            if(temp->next->next==nullptr){
                temp->next->prev=nullptr;
                delete temp->next;
                temp->next=nullptr;
                return head;
            }
            else{
            temp=temp->next;
            }
        }
        return head;
        
    }

    //deleting the kth postion element
    Node* deleteKth_el(Node* head, int k){
        if(head==NULL){
            return NULL;
        }
        else if(k==1){
            if(head->next == nullptr){
            delete head;
            return nullptr;
        }
            Node*prev=head;
            head=head->next;
            head->prev=nullptr;
            prev->next=nullptr;
            delete prev;
            return head;
        }
        Node* temp=head;
        int count=1;
        while (temp!=nullptr)
        {
            if(temp->next==nullptr && count==k){
                temp->prev->next=nullptr;
                temp->prev=nullptr;
                delete temp;
                return head;
            }
            
         
            if (count==k)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                temp->prev=nullptr;
                temp->next=nullptr;
                delete temp;
                return head;
                
            }
            else{
                count++;
                temp=temp->next;
            }
            
        }
        return head;
        
    }

    //deleting by value 
    Node* deletingbyval(Node* head, int val ){
        if(head==NULL){
            return nullptr;
        }
        else if (head->next==nullptr)
        {
            if(head->data==val){
                delete head;
                return nullptr;
            }
            return head;
        }
        
        else if(head->data==val){
            Node*temp=head;
            head=head->next;
            head->prev=nullptr;
            temp->next=nullptr;
            delete temp;
            return head;
        }
        Node* temp=head;
        while (temp!=nullptr)
        {
            if(temp->next==nullptr&& temp->data==val){
                temp->prev->next=nullptr;
                temp->prev=nullptr;
                delete temp;
                return head;
            }
            else if(temp->data==val){
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                temp->prev=nullptr;
                temp->next=nullptr;
                delete temp;
                return head;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
        


    }





int main(){
    vector<int>arr={3,5,6,9};
    Node* head=arraytodoublyLL(arr);
    Node* temp=deletingbyval(head,3);

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return 0;
}