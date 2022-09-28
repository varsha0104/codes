class Solution {
public:
    /*
    int climbStairs(int n) {
    int a = 1, b = 1;
    while (n--)
        a = (b += a) - a;
    return a;
    }
    */
    
    int climbStairs(int n) {
        if (n <= 2) 
            return n;
        int prev = 2, prev2 = 1, res;
        for (int i = 3; i <= n; i++) 
        {
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        return res;
    }
};