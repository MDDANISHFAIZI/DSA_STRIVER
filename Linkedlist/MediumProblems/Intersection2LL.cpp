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

    // Node * IntersectionofLL(Node* head1, Node*head2){
    //     Node*tempA=head1;
    //     Node*tempB=head2;
    //     unordered_map<Node*,int>cpp;
    //     while (tempA!=nullptr)
    //     {
    //         cpp[tempA]++;
           
    //         tempA=tempA->next;
    //     }
    //     while (tempB!=nullptr)
    //     {
    //         if(cpp.find(tempB)!=cpp.end()){
    //             return tempB;
    //         }
            
    //         tempB=tempB->next;
    //     }
    //     return nullptr;
        

        
    // }

      Node * IntersectionofLL(Node* head1, Node*head2){
        Node*tempA=head1;
        Node*tempB=head2;
        int c1 =0;
        while (tempA!=nullptr)
        {
            c1++;
            tempA=tempA->next;
        }
        int c2 =0;
        while (tempB!=nullptr)
        {
             c2++;
            tempB=tempB->next;
        }
       tempA=head1;
       tempB=head2;
        
        if(c2>c1){
            for (int i = 1; i <= c2-c1; i++)
            {
                tempB=tempB->next;
            }
            while (tempA!=nullptr)
            {
                 if(tempA==tempB){
            return tempA;
            tempA=tempA->next;
            
            }
            }
            
           
            
        }
        else{
             for (int i = 1; i <= c1-c2; i++)
            {
                tempA=tempA->next;
            }
            while (tempA!=nullptr)
            {
                 if(tempA==tempB){
            return tempA;
            tempA=tempA->next;
            
            }
            }
        }


        return NULL;
        
        

        
    }


int main(){
    vector<int>vec={};
    Node* head=covertarraytoLL(vec);
    //deleting the head
     head=(head);
    //  cout<<head->data;
     Node* temp=head;
     while (temp!=nullptr)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     
    
}