class Solution {
private:
    int fib_number(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        return fib_number(n-1) + fib_number(n-2);
    }
public:
    int fib(int n) {
        return fib_number(n);
    }
};
