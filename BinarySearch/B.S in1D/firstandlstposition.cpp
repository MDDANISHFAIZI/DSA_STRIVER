#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
    int low=0;
    int high=nums.size()-1;
    while (low<=high)
    {
        int mid=low + (high - low) / 2;
        if (nums[mid-1]!=target)
        {
            result.push_back(mid);
        }
        else if (nums[mid+1]!=target)
        {
            result.push_back(mid);
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return result;
    

    }
int main(){
vector<int>ans={5,7,7,8,8,8,8,10};
vector<int>check=searchRange(ans,8);
for(int k : check){
    cout<<k<<" ";
}

    return 0;
}