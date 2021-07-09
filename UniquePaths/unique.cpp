//O(n^2) Time and O(m*n) Space Solution 
class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> vec(m, std::vector<int> (n, 0));
        
        //fill in the first row
        for(int i = 0; i < n; i++){
            vec[0][i] = 1;
        }
        
        //fill the first column
        for(int i = 0; i < m; i++){
            vec[i][0] = 1;
        }
        
        //robot can only get to [i][j] from 2 different paths; by taking a right or going down
        //so in [i][j] we look at the number on top and to the left and add those numbers together to get the unique paths to [i][j]
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                vec[i][j] = vec[i-1][j] + vec[i][j-1]; 
            }
        }
        
        return vec[m-1][n-1];
    }
};

//notes on 2D matrix struture in cpp
//const int rows = 100;
//const int cols = 100;
//int arr[rows][cols];

//int row;
//int col;
//std::vector< std::vector<int> > twoDMatrix( row, std::vector<int>(col));
