class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size() == 1) return 0;
        
        std::unordered_map<char, int> hash;
        
         for(int i = 0; i < s.size(); i++){
             hash[s[i]]++;
         }
        
        for(int i = 0; i < s.size(); i++){
            if(hash[s[i]] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
