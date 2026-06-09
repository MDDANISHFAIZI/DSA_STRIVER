#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 5
int reverse(int arr[],int start,int end){
        if (start>=end)
        {
            return 0;

        }
        swap(arr[start],arr[end]);
        return reverse(arr,start+1,end-1);
        
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}