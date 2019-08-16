class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        for(int i = 0; i < height.size(); ++i){
            for(int j = i+1; j < height.size(); ++j){
                int min = std::min(height[i], height[j]);
                max = std::max(max, min*(j- i));
            }
        }
        
        return max;
    }
};
