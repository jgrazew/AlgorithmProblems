 //i think i could work this using a hash table as well...
 bool isValid(string s) {
        stack<char> stackOfChars;
        bool isVaild = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '}' || s[i] == ']' || s[i] == ')'){
                 if(stackOfChars.empty()){
                    return false;
                 }
                
                if(s[i] == '}' && stackOfChars.top() != '{') return false;
                if(s[i] == ']' && stackOfChars.top() != '[') return false;
                if(s[i] == ')' && stackOfChars.top() != '(') return false;
                stackOfChars.pop();
            } else {
               stackOfChars.push(s[i]);
                }
             
        }
        
        if(!stackOfChars.empty()){
                    return false;
        }
        
        return true;
    }
