class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer; 
        map<int, int> hashMap;
        
        for(int i = 0; i != nums.size(); i++){
            if(hashMap.find(target-nums[i]) == hashMap.end()){
                hashMap.emplace(nums[i], i);
            }
            else{
                answer = {hashMap.find(target-nums[i])->second, i};
                return answer;
            }
        }
        throw;
    }
};
