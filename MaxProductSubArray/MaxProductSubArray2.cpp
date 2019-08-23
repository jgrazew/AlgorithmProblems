 //Dynamic Programming approach
 int maxProduct(vector<int>& nums) {
        int maxResult = 1;
        int minResult = 1;
        int result = 0;
        
        if(nums.size() == 1){
            return nums[0]; 
        }
        
        for(int i = 0; i != nums.size(); i++){
            if(nums[i] < 0){
                std::swap(maxResult, minResult);
            }
            maxResult = std::max(nums[i], nums[i]*maxResult);
            minResult = std::min(nums[i], nums[i]*minResult);
            result = std::max(result, maxResult);            
        }
        
        return result;
    }
