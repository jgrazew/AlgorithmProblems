//look at in code notes on this page for greater understanding of Binary Search Algorithm https://www.geeksforgeeks.org/binary-search/    
int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int middle = 0;
        
        while(low < high){
            middle = (low + (high-1)) / 2;
            
            if(nums[middle] == target){
                return middle;
            }            
            else if(nums[middle] >= target){
                high = middle;
            }
            else{
                low = middle + 1;
            }
        }
        
        return high;
    }
