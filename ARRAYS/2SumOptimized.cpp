#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>nums,int target){
    sort(nums.begin(),nums.end());
    int n=nums.size();

    vector<int>vec;
    
    int left=0;
    int right=n-1;
    while (left<right)
    {
        // for (int i = 0; i < n; i++)
        // {
            
        // }
        if (nums[left]+nums[right]==target)
        {
            vec.push_back(nums[left]);
            vec.push_back(nums[right]);
            break;

        }
        else if (nums[left]+nums[right]>target )
        {
            right--;
        }
        else if (nums[left]+nums[right]<target )
        {
            left++;
        }

        
        
        
    }

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    return vec;
    
    



}


int main(){
 vector<int>vec={1,2,3,1,4};
    vector<int> ans=twosum(vec,6);
    for(int x : ans){
        cout<<x<<" ";
    }
}