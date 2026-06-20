#include<bits/stdc++.h>
using namespace std;
int answers(int n,int r){
    n=n-1;
    r=r-1;
    long long ans=1;
    for (int i = 0; i < r; i++)
    {
        ans=(ans*(n-i))/(i+1);
        
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    for (int j = 1; j <=n; j++)
    {  
    for (int i = 1; i <=j; i++)
    {
        cout<<answers(j,i)<<" ";
    }
    cout<<endl;
}
    
}