#include<bits/stdc++.h>
using namespace std;
int answers(int n,int r){
    n=n-1;
    r=r-1;
    int ans=1;
    for (int i = 0; i < r; i++)
    {
        ans=(ans*(n-i))/(i+1);
        
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<answers(n,r);
}