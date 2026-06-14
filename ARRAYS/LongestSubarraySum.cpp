#include<bits/stdc++.h>

//wrong
using namespace std;
int Subarray(vector<int>&vec,int k){  //1,2,3,1,1,1,1,4,2,3      k=3
    sort(vec.begin(),vec.end());      //1,1,1,1,1,2,2,3,3,4  
    int p=vec[0]+vec[1];  
    int count=2 ; 
    // if (p==k)
    // {
    //    count=p;
    // }
                        //0,1,2,3,4,5,6,7,8,9
    for (int i = 2; i < vec.size(); i++)
    {   
        if (p!=k)
        {
            p=p+vec[i];
            count=count+1;
        }
        
        
    }
    return count;
    

}

int main(){

vector<int>vec={1,2,3,1,1,1,1,4,2,3};
cout<<Subarray(vec,6);

    return 0;
}