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

    //for deleting the head 

    Node* deletetheLL(Node*head){
        if(head==NULL) return head;
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;


    }
    //deleting last element of linkelist
    Node* Deletethelastelement(Node* head){
        if(head==NULL || head->next==NULL) return NULL;
        Node*temp=head;
        while (temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
       delete temp->next;
        temp->next=nullptr;

        return head;
        
        
    
    }
    //deleting K element from the linkedlist
    Node* Kthelementremove(Node* head ,int k){
            if(head==NULL || head->next==nullptr) return NULL;
            if (k==1)
            {
                Node*temp=head;
                head=head->next;
                delete temp;
                return head;

            }
            int count=0;
             Node*temp=head;
            Node* previous=NULL;
            while (temp !=nullptr)
            {
                count++;
                if (count==k)
                {
                    previous->next=previous->next->next;
                    delete temp;
                    break;
                }
                else{
                    previous=temp;
                    temp=temp->next;
                }
                
                
            }
            return head;
            
            
    }
      //deleting el element from the linkedlist
    Node* elthelementremove(Node* head ,int el){
            if(head==NULL || head->next==nullptr) return NULL;
            if (head->data==el)
            {
                Node*temp=head;
                head=head->next;
                delete temp;
                return head;

            }
            
             Node*temp=head;
            Node* previous=NULL;
            while (temp !=nullptr)
            {
               
                if (temp->data==el)
                {
                    previous->next=previous->next->next;
                    delete temp;
                    break;
                }
                else{
                    previous=temp;
                    temp=temp->next;
                }
                
                
            }
            
            return head;
            
    }

int main(){
    vector<int>vec={2,3,5,2,5};
    Node* head=covertarraytoLL(vec);
    //deleting the head
     head=elthelementremove(head,1);
    //  cout<<head->data;
     Node* temp=head;
     while (temp!=nullptr)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     
    
}