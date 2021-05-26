  //we will sort each string and use it as a key to a hash table. 
  //we will add the unsorted string to the value which will be a vector of strings
  //this vector in the value will be our groups. 
  //we can then add all of these vectors to another vector and this will be our return value 
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> returnVector;        
        std::map<std::string, std::vector<std::string>> hash;
        
        if(strs.size() == 0) return returnVector;
        
        for(auto s : strs){
            std::string temp = s;
            std::sort(s.begin(), s.end());
            hash[s].push_back(temp);
        }        
        
        for(auto h : hash){
            returnVector.push_back(h.second);
        }
        
        return returnVector;
    }
