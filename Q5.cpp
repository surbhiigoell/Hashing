// HASHING QUESTION NO. 5

// insert all elements in map then check for element with 1 frequency.
// Time complexity : O(n)
// Space complexity : O(1)

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int index;
        for(char a:s)
            mp[a]++;
        for(int i=0;i<s.length();i++)
            if(mp[s[i]]==1)
                return i;
        return -1;
    }
};