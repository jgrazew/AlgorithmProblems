    vector<int> plusOne(vector<int>& digits) {
    int sizeOfVector = digits.size();
    int lastIndex = sizeOfVector - 1;
   
    for(int i = sizeOfVector; i > 0; i--){
        
        if(digits[i-1] != 9){
        digits[i-1] += 1;
        return digits;
        }
        
        digits[i-1] = 0;
        
        /*at this point digits[1-1] was equal to 9, therefore we know that we that the first number in the array was a 9 so 
        we set that number equal to zero and then add a one in the beginning of the array*/
        if(i == 1){
            digits.emplace(digits.begin(), 1);
        }
    }
        
    return digits;    
        
    }
