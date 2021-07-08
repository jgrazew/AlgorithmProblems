//Dynamic Programming Bottom up approach which has time complexity and space complexity of O(n)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() <= 1) return cost[0];
        
        //we need to initialize the vector with a certain size since we are indexing the vector not using push_back to dyamically add values
        //std::vector<int> minAtEachStep = std::vector<int>(cost.size(), 0);
        std::vector<int> minAtEachStep(cost.size());
            
        for(int i = 0; i < cost.size(); i++){
            
            if(i==0|| i==1){
                minAtEachStep[i] = cost[i];
            }
            else{
                minAtEachStep[i] = cost[i] + std::min(minAtEachStep[i-1], minAtEachStep[i-2]);
            }            
            
        }
        return std::min(minAtEachStep[cost.size()-1], minAtEachStep[cost.size()-2]);
    }
};
