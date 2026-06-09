#include<bits/stdc++.h>
using namespace std;
void Intersection(vector<int>&arr1,vector<int>&arr2){
    vector<int>vec;
   for (int i = 0; i < arr1.size(); i++)
   {
    for (int j = 0; j < arr2.size(); j++)
    {
        if (arr1[i]==arr2[j] &&  find(vec.begin(),vec.end(),arr1[i])==vec.end())
        {
            vec.push_back(arr1[i]);
        }
        
    }

    
   }
   for (int i = 0; i < vec.size(); i++)
   {
        cout<<vec[i]<<" ";
   }
   
   

}
int main(){
    vector<int>arr1={1,3,2,3,4,5};
    vector<int>arr22={4,3,4,4,5};
    Intersection(arr1,arr22);

}