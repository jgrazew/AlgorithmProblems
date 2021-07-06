//Below utilizes a hash table in order to replace making a recurive call with the same variable multiple times
//since we are moving sequentially, we could use a array and the index would match n. This would save some memory 
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        std::map<int, int> hash;
        
        hash[0] = 0;
        hash[1] = 1;
        
        for(int i = 2; i <=n; i++){
            hash[i] = hash[i-1] + hash[i-2];
        }
        
        return hash[n];
    }
};
