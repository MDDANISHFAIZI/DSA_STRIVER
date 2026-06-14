#include<bits/stdc++.h>
using namespace std;

int Majority(vector<int>& arr){

    unordered_map<int,int> mpp;

    for(int i = 0; i < arr.size(); i++){
        mpp[arr[i]]++;
    }

    int n = arr.size();

    for(int i = 0; i < arr.size(); i++){

        if(mpp[arr[i]] > n/2){
            return arr[i];
        }
    }

    return -1;
}

int main(){

    vector<int> arr = {2,2,1,1,1,2,2};

    cout << Majority(arr);

    return 0;
}