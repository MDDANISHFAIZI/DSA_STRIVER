#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;

        cout<<mpp[k]<<endl;
    }
    
    


}