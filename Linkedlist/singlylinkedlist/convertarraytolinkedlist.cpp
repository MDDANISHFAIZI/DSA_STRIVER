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
    int length(Node* head){
        int count=0;
        Node* temp=head;
        while (temp!=nullptr)
        {
            temp=temp->next;
            count++;
        }
        return count;
        
    }
    void travers(Node* head){
        Node* temp=head;
        while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
    bool checkifpresent(Node* head,int target){
        Node* temp=head;
        while (temp!=nullptr)
        {
            if (temp->data==target)
            {
                return true;
            }
            else{
                temp=temp->next;
            }
            
            
            
        }
        return false;
        

    }
    //for deleting the head 

    Node* deletetheLL(Node*head){
        if(head==NULL) return head;
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;


    }

int main(){
    vector<int>vec={2,3,5,2,5};
    Node* head=covertarraytoLL(vec);
    // Node* temp=head;
    // int count=0 ;
    // while (temp!=nullptr)
    // {
    //     // cout<<temp->data<<" ";
    //     temp=temp->next;
    //     count++;
    cout<<length(head)<<endl;
    travers(head);
    cout<<endl;
    cout<<checkifpresent(head,2);
    cout<<endl;




    // }
    // cout<<count;
     head=deletetheLL(head);
     cout<<head->data;
    
}