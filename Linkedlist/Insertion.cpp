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

    //insert in starting of the linkedlist
    Node* insertfirst(Node*head,int val){
        Node* temp=new Node(val,head);
        head=temp;
        return head;


    }

     //insert in last of the linkedlist
    Node* insertlast(Node*head,int val){
        if(head==NULL){
            return new Node(val);
        }
        Node* temp=head;
        while (temp!=nullptr)
        {
           
        if (temp->next==nullptr)
        {
            temp->next= new Node(val);
            break;
        }
        else{
            temp=temp->next;
        }

        }
        return head;

        
        
        
       


    }
    //insertion in kth position 
    Node * insertkth(Node* head,int el,int k){
        if (head==nullptr)
        {
            if(k==1){
                return new Node(el);
            }
        }
        else if(k==1){
            Node* temp=new Node(el,head);
            head=temp;
            return head;

        }
        else{
            Node*temp=head;
            int count =0;
            while (temp!=nullptr)
            {
                count++;
                if (count==k-1)
                {
                    Node* tempu=new Node(el,temp->next);
                    temp->next=tempu;
                    return head;
                }
                else{
                    temp=temp->next;
                }
                
                
            }
            
        }
        
    }



   
   
   
        
int main(){
    vector<int>vec={1,2,3};
    Node* head=covertarraytoLL(vec);

    head=insertkth(head,10,4);

   
     Node* temp=head;
     while (temp!=nullptr)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     
    
}