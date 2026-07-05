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
          if(count==n){
            if(count==n){
                Node*del =head;
                head=head->next;
                delete del;
                return head;
            }
        }
        int orcount=count-n;
        temp=head;
        while (orcount>1)
        {
            temp=temp->next;
            orcount-=1;
        }
        Node* del=temp->next;
        temp->next=del->next;
        delete del;

        return head;
        
        
    }

    


int main(){
    vector<int>vec={2,3,5,2,5};
    Node* head=covertarraytoLL(vec);
    //deleting the head
     head=deletenthfromend(head,3);
    //  cout<<head->data;
     Node* temp=head;
     while (temp!=nullptr)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     
    
}