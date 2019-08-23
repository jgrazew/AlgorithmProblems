//this is a non working iterative approach. It works for most cases but NOT [-1, -1], see MaxProductSubArray2.cpp for the "by the book" solution
int maxProduct(vector<int>& nums) {
        int maxResult = 1;
        int minResult = 1;
        int result = 0;
        bool flag = false;
        
        if(nums.size() == 1){
            return nums[0]; 
        }
        
        for(int i = 0; i != nums.size(); i++){
            if(nums[i] >= 1){
                maxResult *= nums[i];
                //minResult *= nums[i];
				minResult = std::min(nums[i] * minResult, 1);
                result = std::max(maxResult, result);
                flag = true;
            }
            else if(nums[i] < 0){
				int temp = maxResult;
				maxResult = std::max(minResult*nums[i], 1);
				minResult = temp*nums[i];
                result = std::max(maxResult, result);
            }
            else{
                //nums[i] is 0 here
                maxResult = 1;
                minResult = 1;
            }
            
        }
        
        //never had a positive number in the vector therefore it was 1 by default
        if(maxResult == 1 && flag == false){
            return 0;
        }
        
        return result;
    }
