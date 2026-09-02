class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;

        for(string word : strs){
            string key = word;

            sort(key.begin(), key.end());

            group[key].push_back(word);
        }

        vector<vector<string>> result;

        for(auto str: group){
            result.push_back(str.second);
        }
        return result;
    }
};