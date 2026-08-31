class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> seen;

        for(int i = 0; i < s.size(); i++){
            seen[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++){
            seen[t[i]]--;
        }

        for( auto pair: seen){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
