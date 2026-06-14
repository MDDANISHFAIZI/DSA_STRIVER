#include<bits/stdc++.h>
using namespace std;
vector<int> Sorted(vector<int>arr){
    int n=arr.size();
    int low=0;
    int  mid=0;
    int high=n-1;
    
    while(mid <= high){
    if (arr[mid]==0)
    {
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
     else if (arr[mid]==1)
    {
        mid++;
    }
    else if (arr[mid]==2)
    {
        swap(arr[mid],arr[high]);
        high--;
    }
}

    return arr;

    
}

int main(){
    vector<int>vec={0,0,0,1,2,0,1,2,2,1,0};
    vector<int>result=Sorted(vec);
    for(int p : result){
        cout<<p<< " ";
    }

    return 0;
}