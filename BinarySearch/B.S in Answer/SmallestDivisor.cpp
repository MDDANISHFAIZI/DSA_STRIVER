#include<bits/stdc++.h>
using namespace std;
int s_divisor(vector<int>arr,int threshold){
    int min=*(min_element(arr.begin(),arr.end()));
    int max=*(max_element(arr.begin(),arr.end()));
    int ans=max;
    int low=min;
    int high=max;
    while (low<=high){
        int count=0;
        int mid= low + (high - low) / 2;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i]%mid==0 )
        {
                count+=(arr[i]/mid);
        }
        else{
            count+=(arr[i]/mid) + 1;
        }
        }
        if (count>=threshold)
        {
            low=mid+1;
            
        }
        else{
            ans=mid;
            high=mid-1;

        }

        
        
        
        
    }
    return ans;
   
    
}