#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& nums, int k) {

    int n = nums.size();

    k = k % n;

    reverse(nums.begin(), nums.begin() + k);

    reverse(nums.begin() + k, nums.end());

    reverse(nums.begin(), nums.end());
}

int main() {

    vector<int> nums = {1,2,3,4,5};

    int k = 3;

    leftRotate(nums, k);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}