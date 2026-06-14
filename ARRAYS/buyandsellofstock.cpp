#include<bits/stdc++.h>
using namespace std;
int Stocki(vector<int>arr){
    int mini=INT_MAX;
    int count=0;
    int maxi=INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mini>arr[i])
        {
            mini=arr[i];
            count++;
        }
        // cout<<min<<endl;
        
    }
    // cout<<min<<endl;
    for (int j = count; j < arr.size(); j++)
    {
        if (maxi<arr[j])
        {
            maxi=arr[j];
           
        }
    }
    // cout<<max<<endl;
    int l=maxi-mini;

    return l;
    
    
}
int main(){
    vector<int>vec={7,1,5,3,6,4};
    cout<<Stocki(vec);
}