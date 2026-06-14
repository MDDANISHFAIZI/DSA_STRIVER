#include<bits/stdc++.h>
using namespace std;
void TwoSum(vector<int>arr,int k){
    vector<int>vec;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i;  j< arr.size(); j++)
        {
            if (((arr[i]+arr[j]) ==k)  && i!=j)
            {
                vec.push_back(i);
                vec.push_back(j);
            }
            
        }
        
        
    }
    for (int i = 0; i < vec.size(); i++)
    {
       cout<< vec[i]<<" ";
    }
    
}


int main(){
    vector<int>vec={1,2,3,1,4};
    TwoSum(vec,6);

}
