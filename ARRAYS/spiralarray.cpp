#include<bits/stdc++.h>
using namespace std;
vector<int> Spiral(vector<vector<int>>nums){
    vector<int>result;
    int m=nums.size();//rows
    int n=nums[0].size();//column

    int top=0;
    int bottom=m-1;
    int right=n-1;
    int left=0;

    while (top<=bottom && left<=right)
    {
        //left to right
        for (int i = left; i <= right; i++)
        {
            result.push_back(nums[top][i]);

        }
        top++;
        //top to bottom
        for (int i = top; i <= bottom; i++)
        {
            result.push_back(nums[i][right]);

        }
        right--;
        //right to left
        if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.push_back(nums[bottom][i]);
                }
                bottom--;

        

    }
     // Bottom -> Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.push_back(nums[i][left]);
                }
                left++;
            }

    
return result;
    


}
}
int main(){

return 0;

}