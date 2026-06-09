#include<bits/stdc++.h>
using namespace std;//1,2,3,4,4      4
int Search(vector<int>&vec,int k){
    int l=-1;
    for(int p : vec){
        l=l+1;
        if(p==k){
                
                return l;
        }
        return -1;
    }
}
int main(){
    vector<int>vec={1,2,3,4,4};
    int p=Search(vec,2);
    cout<<"number is at index "<< p;

}