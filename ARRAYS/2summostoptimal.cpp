#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int rem = target - nums[i];

            if (mp.find(rem) != mp.end()) {

                vector<int> ans;

                ans.push_back(mp[rem]);
                ans.push_back(i);

                return ans;
            }

            mp[nums[i]] = i;
        }

        vector<int> ans;   // empty vector

        return ans;
    }


int main(){
    vector<int>vec={1,2,3,1,4};
    twoSum(vec,6);

}
