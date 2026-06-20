#include<bits/stdc++.h>
using namespace std;
int SubArray(vector<int>nums,int target){
    int n=nums.size();
    
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        
        {
            int sum=0;
            int temp=0;
            for (int k = i; k <= j; k++)
            {
                sum+=nums[k];
                 temp++;


                if (sum==target)
                {
                    if (count<temp)
                    {
                        count=temp;
                    }
                    
                    
                }
                
            }
            
        }
        
    }
    return count;
    


}
int main(){

vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
int k=3;
cout<<SubArray(arr,k);
    return 0;

}