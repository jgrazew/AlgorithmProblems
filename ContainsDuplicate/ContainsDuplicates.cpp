class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        std::vector<int> v;
        
        for(int i : nums){
           if(std::find(v.begin(), v.end(), i) != v.end()){
               return true;
           } 
            
            v.push_back(i);
        }
        
        return false;
    }
};
