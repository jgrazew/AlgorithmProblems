 int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if (nums.size() == 1)   return 1; 
		
        int slowPointer = 0;
        int fastPointer = 1;
        
        while(fastPointer < nums.size()){
        
        //be careful to do the fastpointer check first before trying to access that number in the array!
            //if fastPointer is greater then the size of the vector you will be trying to access memory that is not allocated to it
        while(fastPointer < nums.size() && nums[slowPointer] == nums[fastPointer]){
            fastPointer++;
        }
                            
        if (fastPointer < nums.size()){
            slowPointer++;
            nums[slowPointer] = nums[fastPointer];
            fastPointer++;
        }            
        }
        
        return slowPointer+1;
    }
