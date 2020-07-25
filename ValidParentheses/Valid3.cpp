//I like the below implementation because it is clean BUT it has a slower execution time (only faster then 40% of submissions while my Valid2.cpp is faster then 100%) and takes more memory

class Solution {
public:    
    bool isValid(string s) {
    std::map<char,char> characterMapping;
    characterMapping['('] = ')';
    characterMapping['{'] = '}';
    characterMapping['['] = ']';
        
        std::stack<char> theStack;
        
        for(std::string::size_type i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                theStack.push(s[i]);
            } else {
                if(theStack.empty()){
                    return false;
                }
                char temp = theStack.top();
                theStack.pop();
                if(characterMapping[temp] != s[i]){
                    return false;
                }
            }    
        }
        
        if(theStack.size() > 0){
            return false;
        }
        
        return true;
    }
};
