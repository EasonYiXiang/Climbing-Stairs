class Solution {
public:
    int climbStairs(int n) {
        
        if (n == 1) {
            return 1;
        }
        
        int first_step = 1;
        int second_step = 2;
        int next_step = 2;
        
        // Fibonacci 
        for(int i = 3 ; i <= n ; i++){
            next_step = first_step + second_step;
            
            first_step = second_step;
            second_step = next_step;
        
        }
        
        return next_step;
    }
};