#include<bits/stdc++.h>
using namespace std;
bool searchh(vector<vector<int>>mat,int target){
    int n=mat.size();
    int m=mat[0].size();
    int low=0;
    int high=n*m -1;
    while (low<=high)
    {
        int mid= low + (high - low) / 2;
        int row=mid / m;
        int column=mid % m;
        if (mat[row][column]=target)
        {
            return true;
        }
        else if (mat[row][column]<target)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
        

    }
    return false;
    

}
int main(){
    vector<vector<int>>answer={{3,4,7,9},{12,13,16,18},{20,21,23,29}};
    
}