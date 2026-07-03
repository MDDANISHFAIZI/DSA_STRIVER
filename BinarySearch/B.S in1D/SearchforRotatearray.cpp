#include<bits/stdc++.h>// 7,8,9,1,2,3,4,5,6 find 1
using namespace std;
int Searching(vector<int>nums,int target){
    int low=0;
    int high=nums.size()-1;
    while (low<=high)
    {
        int mid= low + (high - low) / 2;
        if( nums[mid]==target) return mid;
        else if (nums[low]>nums[mid])
        {
            
        }
        

    }
    

}