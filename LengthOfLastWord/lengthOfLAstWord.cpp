    int lengthOfLastWord(string s) {
        int stringLength = s.length();
        int count = 0;
        bool startedCountinglastWord = false;
        for(int i = stringLength - 1; 0 <= i; i--)
        {       
            if(s[i] != ' '){
                startedCountinglastWord = true;
                std::cout << s[i] <<std::endl;
                count++;
            } else if(startedCountinglastWord == true){
                return count;
            }
        }
        
        return count;
    }
