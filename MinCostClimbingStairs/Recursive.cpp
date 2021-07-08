//below is the alternative to a dynamic programming solution.
//Note that if the input is too long the time limit will exceed because of how many function calls you are making 
class Solution {
private:
    int minHelper(std::vector<int>& cost, int i){
      //need this because we can subract 2 and go into memory that is not allocated for this vector
        if(i < 0) return 0;
      //if we were going from bottom to top this would be if(i == cost.size()) return 0; because we have reached the end
        if(i == 0 || i == 1) return cost[i];
        
      //if we start from the top then we have 2 options we can take. We can go back 1 step or we can go back 2 steps
      //we take minimum of those 2 options then add on the cost of the step that we are currently standing on which is cost[i]
      //if we did bottom to top then we would be adding 1 or 2 steps on instead of subtracting
        return std::min(minHelper(cost, i-1), minHelper(cost, i-2)) + cost[i];
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //we are going top down so we could either start back one step or back 2 steps
        //if we were going bottom up we could do (cost, 0) or (cost, 1)
        return std::min(minHelper(cost, cost.size()-1), minHelper(cost, cost.size()-2));
    }
};
