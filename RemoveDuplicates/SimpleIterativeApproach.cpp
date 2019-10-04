int removeDuplicates(vector<int>& nums) {
        int i = 0;
        //when you have 2 numbers that are equal(num[i-1] = 2 and num = 2) then we will not enter the if statement therefore we will not 
        //increment i. the next time we come around (lets say num = 3) 2 < 3 is true therefore we put 3 in that i position and iterate it.
        //we never put the duplicate in the i position!
        //i will also serve as a counter so we can just return i
        for(auto num : nums)
            if (i < 1 || nums[i - 1] < num)
                nums[i ++] = num;
        return i;
    }
