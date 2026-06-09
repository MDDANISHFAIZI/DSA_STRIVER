#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int n;
    cin>>n;
    int arr[n];
     int t;
    cin>>t;

    int hash[13]={0};

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]=hash[arr[i]]+1;
    }
    
    while (t--)
    {
        int k;
        cin>>k;
        cout<<hash[k]<<endl;
    }
    
    
    
}
    

