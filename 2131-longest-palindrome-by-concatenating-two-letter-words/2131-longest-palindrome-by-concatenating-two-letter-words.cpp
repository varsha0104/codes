class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int len = 0 ;
        bool flag = 0;
        unordered_map<string,int>mp;
        for(int i = 0 ; i < words.size(); i++){
            mp[words[i]]++;
        }
        
        for(int i = 0 ; i < words.size(); i++){
            if(words[i][0] != words[i][1])
            {
                string s ="";
                s += words[i][1];
                s += words[i][0];
                
                if(mp.find(s) != mp.end()){
                    int cnt = min(mp[words[i]] , mp[s]);
                    
                    len += (cnt*4);
                    
                    mp.erase(words[i]);
                    mp.erase(s);
                }
            }
            else if(words[i][0] == words[i][1])
            {
              int cnt = mp[words[i]];
              if(cnt%2 == 0)
              {
                  len += cnt*2;
              }
              else
              {
                 if(flag == 0){
                     len += cnt *2;
                     flag = 1;
                 } 
                 else{
                     len += (cnt-1)*2;
                 }
              }
                mp.erase(words[i]);
            }
        }
        return len;
    }
};