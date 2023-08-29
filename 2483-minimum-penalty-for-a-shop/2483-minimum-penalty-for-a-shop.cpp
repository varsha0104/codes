class Solution {
public:
    int bestClosingTime(string s) {
        int y = 0,n = 0;
        for(int i = 0;i < s.length();i++){
            if(s[i] == 'Y')
                y++;
        }
        int mini = y,ans = 0;
        for(int i = 0;i < s.length();i++){
            if(s[i] == 'Y')
                y--;
            else 
                n++;
            if(y + n < mini)
                ans = i+1, mini = y + n;
        }
        return ans;
    }
};