class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        int sequence = 1;
        int longest = 1;

        for(int i = 0; i < nums.size() - 1; i++) {

            if(nums[i] + 1 == nums[i + 1]) {
                sequence++;
            }
            else if(nums[i] == nums[i + 1]) {
                continue;
            }
            else {
                sequence = 1;
            }

            longest = max(longest, sequence);
        }

        return longest;
    }
};