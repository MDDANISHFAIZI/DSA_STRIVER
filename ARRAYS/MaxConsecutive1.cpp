#include<bits/stdc++.h>
using namespace std;
int Max1(vector<int>& vec) {
    int count = 0;
    int maxi = 0;

    for(int t : vec) {
        if(t == 1) {
            count++;
            maxi = max(maxi, count);
        }
        else {
            count = 0;
        }
    }

    return maxi;
}



int main(){
    vector<int>vec={1,1,0,1,1,1,0,1,1};
    cout<<Max1(vec);
}