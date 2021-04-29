class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose and reflect
        int height = matrix.size();
        int width = matrix[0].size();
        
        for(int i = 0; i < height; i++){
            for(int j = i; j < width; j++){
                int temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
        
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width/2; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][width - j - 1];
                matrix[i][width - j - 1] = temp;
            }
            
        }
        
    }
};
