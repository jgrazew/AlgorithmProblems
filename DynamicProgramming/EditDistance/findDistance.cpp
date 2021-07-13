//this should also be part of the string problems 
class Solution {
public:
    int minDistance(string word1, string word2) {
        //add one because our dp matrix starts a blank space rather then beginning of string
        int rows = word1.size()+1;
        int columns = word2.size()+1;
        std::vector<std::vector<int>> dpMatrix(rows, std::vector<int>(columns, 0));
        
        for(int i = 0; i < rows; i++){
            dpMatrix[i][0] = i;
        }
        
        for(int i = 0; i < columns; i++){
            dpMatrix[0][i] = i;
        }
        
        for(int i = 1; i < rows; i++){
            for(int j = 1; j < columns; j++){
                
                int deleteOp = dpMatrix[i][j-1];
                int replaceOp = dpMatrix[i-1][j-1];
                int insertOp = dpMatrix[i-1][j];
                
                //If the characters are not equal that means we will have to perform a replace action
                if(word1[i-1] != word2[j-1]){
                    replaceOp += 1;
                }
                
              //will always add 1 for delete sand insert even if the chars match. WIll only add 1 to replace id chars do NOT match 
                int minOp = std::min(std::min(deleteOp + 1, replaceOp), insertOp + 1);
                
                //*Below didnt work because I was only adding 1 to insert and delete if the chars didnt match 
                //If the characters are not equal that means we will have to take an action so add 1
                //if(word1[i-1] != word2[j-1]){
                //    minOp += 1;
                //}
                
                dpMatrix[i][j] = minOp;
            }
        }
        
        return dpMatrix[rows-1][columns-1];
        
    }
};

//[rows][columns]
