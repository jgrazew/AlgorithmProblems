//another not so clean solution that i wrote when trying this problem again months later

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> theStack;
        
        for(std::string::size_type i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                theStack.push(s[i]);
            } else {
                if(theStack.size() > 0){
                    char temp = theStack.top();
                    theStack.pop();
                    
                    switch(s[i]){
                        case ')':
                            if(temp != '('){
                                return false;
                            }
                            break;
                        case ']':
                            if(temp != '['){
                                return false;
                            }
                            break;
                        case '}':
                            if(temp != '{'){
                                return false;
                            }
                            break;
                         default:
                            break;
                                        
                    }
                } else{
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
