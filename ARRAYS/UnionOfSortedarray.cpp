#include<bits/stdc++.h>
using namespace std;
void Union(vector<int>&arr1,vector<int>&arr2){
    for (int i =0; i < arr2.size() ; i++)
    {
        arr1.push_back(arr2[i]);
    }

    set<int>st;
    for(int p : arr1){
        st.emplace(p);
    }

    for(int s:st){
        cout<<s<<" ";
    }
    

}
int main(){
    vector<int>arr1={1,3,2,3,4,5};
    vector<int>arr22={4,3,4,4,5};
    Union(arr1,arr22);

}