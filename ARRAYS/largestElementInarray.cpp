#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&vec){
sort(vec.begin(),vec.end());
int k=vec[vec.size()-1];
return k;

}
int main(){
    vector<int>vec={5,2,15,7,1,9};
    cout<<largest(vec);

}