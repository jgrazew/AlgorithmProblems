//Not constant space. Space is linear with array size 
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() < 2) return nums[0];
        std::map<int,int> hash;
        
        for(int i : nums){
            hash[i]++;
        }
        
        for(auto m : hash){
            if(m.second == 1){
                return m.first;
            }
        }
        
        return INT_MIN;
    }
};
