class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.empty()){
            return 0;
        }
        
        int needleLength = needle.length();
        
        for(auto c = 0; c < haystack.length(); c++)
        {
            if(haystack[c] == needle[0])
            {
               std::string tempString =  haystack.substr(c, needleLength);
                
                if(tempString == needle){
                    return c;
                }
            }
            
        }
        
        return -1;
    }
};
