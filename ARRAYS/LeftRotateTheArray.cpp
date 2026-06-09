#include<bits/stdc++.h>  //1 3 4 5 2
using namespace std;

void leftrotate(int arr[], int n){
    int temp=arr[0];
    
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[5]={1,3,4,5,2};
    leftrotate(arr,5);
}

