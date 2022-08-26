class Solution {
public:
    bool isPalindrome(int x) {
        int n,num=x;
        long int rev=0;
        if(x<0) {
            return false;
        }
        else{
            while(x!=0)
            {
                n=x%10;
                rev=rev*10+n;
                x=x/10;
            }
        }
        
        if(num==rev){
            return true;
        }else{
            return false;
        }
    }
};