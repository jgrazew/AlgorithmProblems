class Solution {
public:
    int reverse(int x) {
        int solution = 0;
        bool isNeg = false;
        
        if(x < 0){
            isNeg = true;
            x = x*-1;
        }
        
        while(x > 0){
            int temp = x % 10;
            if(solution == 0){
                solution = temp;
            } else{
                solution = (solution * 10) + temp;
            }
            
            x = x/10;
        }
        
        if(isNeg == true){
            solution = solution * -1;
        }
        
        return solution;
    }
};
