//HASHING QUESTION NO. 2

//program to find two sum

//use unordered_map <int,int>, instead of frequency add index to the map mp[nums[i]] = i
// Time complexity : O(n)
// Space complexity : O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int val= target-nums[i];
            if(mp.find(val)!=mp.end())
            {
                v.push_back(mp[val]);
                v.push_back(i);
                return v;
            }
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};