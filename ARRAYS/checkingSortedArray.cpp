#include<bits/stdc++.h>
using namespace std;
string check(int arr[],int n){
    string k="true";
    string l="false";
    int p[n];
    for (int i = 0; i < n; i++)
    {
        p[i]=arr[i];
    }
    
    sort(p,p+n);
    for (int i = 0; i < n; i++)
    {
        if (p[i]!=arr[i])
        {
            return l;
            break;
        }
        
        
    }
    return k;
    

    }





int main(){
    int arr[5]={1,3,4,5,7};
    cout<<check(arr,5);

}