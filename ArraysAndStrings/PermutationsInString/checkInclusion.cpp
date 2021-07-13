//this uses the sliding window technique
//it is a tell to use the sliding window technique because we are looking at a substring 
//time complexity is linear O(n) and space complexity is onstant O(1)
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() == 0) return true;
        if(s2.size() == 0) return false;
        if(s1.size() > s2.size()) return false;
        
        std::vector<int> s1Vec(26, 0);
        std::vector<int> s2Vec(26, 0);
        
        int s1Size = s1.size();
        int s2Size = s2.size();
        
        for(int i = 0; i < s1Size; i++){
            s1Vec[s1[i] - 'a']++;
            s2Vec[s2[i] - 'a']++;
        }
        
        if(s1Vec == s2Vec) return true;
        
        for(int i = s1Size; i < s2Size; i++){
            //s2Vec[s2[i-1] - 'a']--; this was wrong because we are taking the last element off the window rather then the first
            s2Vec[s2[i-s1Size] - 'a']--;
            s2Vec[s2[i] - 'a']++;
            
            if(s1Vec == s2Vec) return true;
        }
        
        return false;
    }
};
