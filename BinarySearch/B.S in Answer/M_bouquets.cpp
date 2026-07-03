#include<bits/stdc++.h>
using namespace std;
int blooming(vector<int>arr,int m, int k){
    if ((long long)m * k > arr.size())
        return -1;
    int min= *(min_element(arr.begin(),arr.end()));
     int max= *(max_element(arr.begin(),arr.end()));
     while (min<=max)
     {
        int count=0;
        int bcount=0;
     for (int i = 0; i <arr.size(); i++)
     {
        
        if (min>=arr[i])
        {
            count+=1;
            
            if (count==k)
            {
                bcount+=1;
                count=0;
            }
            
            
        }
        else{
                count=0;
            }
          
            
        
     }
      if (bcount>=m)
            {
                 return min;
            }
          min++;
    }
    return -1;
     
}

int main(){
    vector<int>check={7,7,7,7,13,11,12,7};
    cout<<blooming(check,2,3);
}