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

int main(){
    int arr[5]={2,3,5,2,5};
    Node*y= new Node(arr[0]);
    cout<<y->data;
}