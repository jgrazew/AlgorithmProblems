//a secong solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> returnVector;
        std::map<int, int> myMap;
        
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            
            if(myMap.find(complement) != myMap.end()){
                returnVector.push_back(myMap.find(complement)->second);
                returnVector.push_back(i);
                return  returnVector;
            }
            
            myMap.emplace(nums[i], i);
        }
        
        throw std::invalid_argument( "no solution" );
    }
};
