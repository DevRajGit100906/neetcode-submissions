#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq; bool possible = false;
        for(int i = 0; i < n; i++) {
            if (freq[nums[i]] > 0) {
                possible = true;
                break;
            };
            freq[nums[i]]++;
        };
        return possible;
    }
};