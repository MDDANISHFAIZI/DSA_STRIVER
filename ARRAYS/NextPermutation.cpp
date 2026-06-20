#include<bits/stdc++.h>
using namespace std;

vector<int> nxt(vector<int> vec){
    next_permutation(vec.begin(), vec.end());
    return vec;
}

int main(){
    vector<int> vec = {3,2,1};

    vector<int> answer = nxt(vec);

    for(int p : answer){
        cout << p << " ";
    }

    return 0;
}