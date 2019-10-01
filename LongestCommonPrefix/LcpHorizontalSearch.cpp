    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        string prefix = strs[0];
        
        for(int i = 1; i < strs.size(); i++){
            //if this sequence was not matched for string at index i (if it was found as prefix it would return zero because it would be found at the beginning of the 
            //string) we will decrease the string by 1 and see if that prefix is found in our string
            //if it was found then go to the next string in the array and see if ti matches
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length() -1);
                if(prefix.length() == 0) return "";
            }
        }
        
        return prefix;
    }
