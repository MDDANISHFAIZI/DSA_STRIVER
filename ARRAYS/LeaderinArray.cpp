#include<bits/stdc++.h>
using namespace std;

vector<int> Leader(vector<int> nums){
    vector<int> result;

    int maxi = nums[nums.size()-1];
    result.push_back(maxi);

    for(int i = nums.size()-2; i >= 0; i--){
        if(nums[i] > maxi){
            result.push_back(nums[i]);
            maxi = nums[i];
        }
    }

    reverse(result.begin(), result.end());
    return result;
}

int main(){
    vector<int> vec = {10,22,12,3,0,6};

    vector<int> ans = Leader(vec);

    for(int x : ans){
        cout << x << " ";
    }
}