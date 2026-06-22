#include<bits/stdc++.h>
using namespace std;
int ceeil(vector<int>nums,int target){

    int low=0;
    int high=nums.size()-1;
    int ans=nums.size();
    while (low<=high)
    {
        int mid= low + (high - low) / 2;
        if (nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }


        
    }
    return ans;
    
}
int Flooor(vector<int>nums,int target){
    
    int low=0;
    int high=nums.size()-1;
    int ans=nums.size();
    while (low<=high)
    {
        int mid= low + (high - low) / 2;
        if (nums[mid]<=target)
        {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }


        
    }
    return ans;

}

int main(){
    vector<int>nums={10,20,30,40,50};
    cout<<"the floor index is "<<Flooor(nums,25)<<endl;
    cout<<"the ceil index  is "<<ceeil(nums,25);

}