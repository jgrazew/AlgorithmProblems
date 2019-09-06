class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer; 
        map<int, int> hashMap;
        
        //we are trying to find the other number that would match with nums[i] to equal the target, i.e we are seeing if that number
        //is laready in the hashMap. If not we will add another number to search for otherwise we dropdown and return the index's
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
