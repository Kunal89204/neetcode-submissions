class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freq;


       for(int num : nums){
        freq[num]++;
       } 

       vector<pair<int, int>> elements;

       for(auto fr : freq){
        elements.push_back({fr.second, fr.first});
       }

       sort(elements.rbegin(), elements.rend());

        vector<int> result;
       for(int i = 0; i < k; i++){
        result.push_back(elements[i].second);
       }

       return result;
       
    }
};
