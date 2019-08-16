class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        
        //we are going to start at each far side bar and work towards the middle
        int i = 0;
        int j = height.size() - 1;
        
        while(i < j){
            int min = std::min(height[i], height[j]);
            max = std::max(max, min*(j-i));
            
            //keep taller of 2 bars because the smaller one is the potentially limiting one
            if(height[i] < height[j]){
                ++i;
            }else {
                //j is last so we want to move towards the middle
                --j;
            }
        }
     
        return max;
    }
};
