    //dynamic programming solution 
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        
        int waysToClimbStaircase[n+1];
        
        waysToClimbStaircase[1] = 1;
        waysToClimbStaircase[2] = 2;
        
        for(int i = 3; i <= n; i++){
            waysToClimbStaircase[i] = waysToClimbStaircase[i-1] + waysToClimbStaircase[i-2];
            
            std::cout << i << "  " << waysToClimbStaircase[i] << std::endl;
        }
        
        return waysToClimbStaircase[n];
    }
