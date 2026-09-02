class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for(int el : nums){
            seen[el]++;
        };

        vector<pair<int, int>> freq;

        for(auto num:seen){
            freq.push_back({num.second, num.first});
        }

        sort(freq.rbegin(), freq.rend());

        vector<int> result;

        for(int i = 0; i < k; i++){
            result.push_back(freq[i].second);
        }

        return result;
    }
};
