#include<bits/stdc++.h>
using namespace std;
vector<int>Rearranged(vector<int>arr){
        vector<int>brr1;
        vector<int>brr2;
        vector<int>crr;
        for (
            int i = 0; i < arr.size(); i++)
        {
            if (arr[i]>0)
            {
                brr1.push_back(arr[i]);
            }
            else{
                brr2.push_back(arr[i]);
            }
            
        }
        if (arr[0]>0)
        {
            
            for (int i = 0; i < brr1.size(); i++)
            {
                // if (i%2==0)
                // {
                    crr.push_back(brr1[i]);
                    crr.push_back(brr2[i]);
                    
                    
                
                // else
                // {
                //     crr.push_back(brr2[i]);
                // }
                
                
            }
            
        }
        else if (arr[0]<0)
        {
            for (int i = 0; i < brr1.size(); i++)
            {
                
                    crr.push_back(brr2[i]);
                    crr.push_back(brr1[i]);
                
                // else
                // {
                //     crr.push_back(brr1[i]);
                // }
                
                
            }
            
        }

        return crr;
        
        
}

int main(){
    vector<int>vec={-2,1,4,-5,2,-4};
    vector<int>answer=Rearranged(vec);
    for(int k : answer){
        cout<<k<<" ";
    }
    return 0;
}