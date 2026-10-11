class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;


        for(char ch : s){
            seen[ch]++;
        }

        for(char ch : t){
            seen[ch]--;
        }

        for(auto [ch, i]: seen){
            if(i != 0){
                return false;
            }
        }

        return true;
    }
};
