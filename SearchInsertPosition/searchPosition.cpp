    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(target == nums[i] ||target < nums[i]){
                return i;
            }
        }
        
        return nums.size();
    }
