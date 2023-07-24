// class Solution {
// public:
//  double solve(double x,int n){
//           if(n==0){
//             return 1; //power of 0 is 1;
//         }
//        double temp=myPow(x,n/2);
//         temp=temp*temp;
//         if(n%2==0){ // if even  return  just without doing nothing
//             return temp;
//         }
//         else{
//             return temp*x;//if odd multiple  return by multipling once more with given number
//         }
//     }
//     double myPow(double x, int n) {
//         double ans=solve(x,abs(n));
//         if(n<0)
//             return 1/ans;
//             return ans;
       
//     }
// };

class Solution {
public:
    
    double power(double x ,long n){
        if(n==0) return 1;
        
        if(!(n&1)) return power(x*x,n/2); // even power
        return x*power(x,n-1); // odd power 
    }
    
    double myPow(double x, int n) {
        if(n==0) return 1;
        
        long l=abs((long)n);
        double ans=power(x,l);
        
        return (n>0 ? ans:1/ans);
    }
};