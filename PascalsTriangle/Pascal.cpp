class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return std::vector<std::vector<int>>();
        
        std::vector<std::vector<int>> result;
        
        std::vector<int> firstRow{1};
        
        result.push_back(firstRow);
        
        for(int i = 1; i < numRows; i++){
            std::vector<int> vecToAdd;
            std::vector<int> prevVec = result[i-1];
            
            //first and last value in vector will always be 1
            vecToAdd.push_back(1);
            
            //we can use i instead of prevVec.size() because 1st row will have 1 2nd row will have 2 3rd row will have 3, etc
            //we dont do i-1 as stopping condition because each row will have one more then the last
            for(int j = 1; j < i; j++){
                int tempNum = prevVec[j] + prevVec[j-1];
                vecToAdd.push_back(tempNum);
            }
            
            //first and last value in vector will always be 1
            vecToAdd.push_back(1);
            
            result.push_back(vecToAdd);
        }
        
        return result;
    }
};
