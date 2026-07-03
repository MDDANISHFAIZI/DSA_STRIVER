#include<bits/stdc++.h>
using namespace std;
// int sqroot(int n){
//     int ans=1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i*i<=n)
//         {
//             ans=i;
//         }
//         else{

//             break;
//         }
        
//     }
//     return ans;
    
// }
int sqroot(int n){
    int low=1;
    int high=n;
    int ans=1;
    while (low<=high)
    {
        int mid=low + (high - low) / 2;
        long long sq = 1LL * mid *mid;
        if(sq>n){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;
        }
    }
    return ans;

    
}

int main(){
    cout<<sqroot(488358);
}