#include<bits/stdc++.h>
using namespace std;
set<vector<int>> ThreeSum(vector<int>nums){
    set<vector<int>>result;
    int n=nums.size();
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {   int sum=0;
            for (int k = j+1; k < n; k++)
            {
                
                if (nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>row;
               row.push_back(nums[i]);
               row.push_back(nums[j]);
               row.push_back(nums[k]);
               sort(row.begin(),row.end());
                result.insert(row);
                }
                

                
                
            }
            
        }
        
    }
    return result;

    

}

int main(){

    return 0;
}