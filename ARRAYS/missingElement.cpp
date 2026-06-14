#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&vec){
    int p=1;
    for(int k : vec){
        
        if(k!=p){
            return p;
        }
        p++;
    }
}
int main(){
    vector<int>vec={1,2,3,5};
    cout<<missing(vec);
}