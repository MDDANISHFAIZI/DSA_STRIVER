#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
    int bigvalue=arr[0];
  for (int i = 1; i < n; i++)
  {
    if(arr[i]>bigvalue){
        bigvalue=arr[i];
    }
  }
  vector<int>ck;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==bigvalue)
    {
        continue;
    }
    ck.push_back(arr[i]);
    
  }
     int Secondvalue=ck[0];
  for (int i = 1; i < ck.size(); i++)
  {
    if(ck[i]>Secondvalue){
        Secondvalue=ck[i];
    }
  }
  return Secondvalue;
  
}

int main(){
    int arr[5]={5,3,6,1,2};
    cout<<secondLargest(arr,5);
}