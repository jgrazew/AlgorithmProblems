class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentMaxSum = 0;
        int result = INT_MIN;
        for(int i = 0; i != nums.size(); ++i){
            currentMaxSum += nums[i];
            result = std::max(currentMaxSum, result);
            //if currentMaxSum (a running sum to see if its larger then result) goes negative then reset it to zero- but we dont touch the previous result
            currentMaxSum = std::max(currentMaxSum, 0);
        }
        
        //note that we return result NOT currentMaxSum
        return result;
    }
};
