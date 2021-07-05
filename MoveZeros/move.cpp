//We iterate through the array and if the number is not equal to zero then we put it in the next available position at the front of the array
//the next available position is tracked by index which we only increment if the current element in the array is not equal to zero
//After adding all non zero values to the front of the original array we will add zero's for the remaining values
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[index] = nums[i];  
                index++;
            }
        }
        
        for(int i = index; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};
