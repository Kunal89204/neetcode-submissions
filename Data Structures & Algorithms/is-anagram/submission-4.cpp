class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> seen;

        


        for(char str : s){
            seen[str]++;
        }

        for(char str : t){
            seen[str]--;
        }

        for(auto [ch, i]: seen){
            if(i != 0){
                return false;
            }
        }

        return true;
    }
};
