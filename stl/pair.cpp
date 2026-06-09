#include<bits/stdc++.h>
using namespace std;
void pairing(){
    pair<int ,int> a ={3,2};
    cout<<a.first<<a.second;
    pair<int,pair<int,int>> b={1,{2,3}};
    cout<<b.first<<b.second.first<<b.second.second;
    pair<int,int> arr[]={{1,2},{3,4},{5,9}};
    cout<<arr[1].first; //it will print 3.
}