#include<bits/stdc++.h>
using namespace std;

    int minEatingSpeed(vector<int>& piles, int h) {

      int low=0;
       int high=*(max_element(piles.begin(),piles.end()));

       while (low<=high)
       {
            int mid=low + (high - low) / 2;
           
            long long k =0;
            for (int i = 0; i < piles.size(); i++)
            {
                if (piles[i]%mid==0)
                {
                    k+=(piles[i]/mid);
                }
                else{
                    k+=(piles[i]/mid) + 1;
                }

                
            }
            if (k<=h)
            {
                high=mid;
            }
            else{
                low=mid+1;
            }

            
            
            
       }
       return low;

       
    }

    
int main(){
    vector<int>prob={3,6,7,11};
    int h=8;
    cout<<minEatingSpeed(prob,h);
}