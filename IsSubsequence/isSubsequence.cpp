//note that initially I thought I could use a hash map and add all the chars in the s string as a key then increment a value for each char for that key.
//then I would loop through the t string and decrement the value. I would expect all numbers to be zero then return true. otherwise return false
//BUT this doesnt check if they are in the same order so it didnt work. 
//The approach below makes sure that the order holds up
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0) return true;
        
        int sPointer = 0;
        int tPointer = 0;
        
        while(tPointer < t.size()){
            if(s[sPointer] == t[tPointer]){
                if(sPointer == s.size()-1){
                    return true;
                }
                sPointer++;
                tPointer++;
            } else{
                tPointer++;
            }
        }
        
        return false;
    }
};
