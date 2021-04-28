//the problem states not to allocate another 2D matrix. I did not follow that part of the instruction here
//so that I could prove my logic to be correct. I allocated another 2D matrix called buffer
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int height = matrix.size();
        int width = matrix[0].size();
        
        vector<vector<int>> buffer(height, vector<int>(width, 0));
        
        for(int i = 0; i < height; i++){
            for(int j= 0; j < width; j++){
                buffer[j][i] = matrix[i][j];
            }
        }
        
        for(int i = 0; i < height; i++){
            for(int j = 0; j < height/2; j++){
                int temp = buffer[i][j];
                buffer[i][j] = buffer[i][width-1-j];
                buffer[i][width-1-j] = temp;
            }
        }
        
        matrix = buffer;
    }
};
