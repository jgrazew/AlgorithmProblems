//same technique can be used to check if a string is string permutation

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        std::unordered_map<char, int> hash;
        
        for(int i= 0; i < s.size(); i++){
            hash[s[i]]++;    
        }
        
        for(int i= 0; i < t.size(); i++){
            hash[t[i]]--;
        }
        
        for(auto h : hash){
            if(h.second != 0){
                return false;
            }
        }
        
        return true;
    }
};
