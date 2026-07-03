#include<bits/stdc++.h>
using namespace std;
int ship_capacity(vector<int>nums,int days){
    int sum=0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        sum+=nums[i];
    }
    
    int low=*(max_element(nums.begin(),nums.end()));
    int high=sum;
    int ans=high;
    while (low<=high)
    {
        int checkday=1;
        int mid=low + (high - low) / 2;
        int insum=0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (insum+nums[i]<=mid)
            {   
                insum+=nums[i];
               
            }
            else{
            insum=0;
            checkday+=1;
            i--;
        }
             
        }
        if (checkday<=days)

        {
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
        
        
        
    }
    return ans;
    


}
int main(){

    return 0;
}