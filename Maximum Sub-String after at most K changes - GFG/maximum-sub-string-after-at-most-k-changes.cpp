//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		    unordered_map<char,int>mp;
             int j=0,ans=INT_MIN,maxfre=0;
                 
             for(int i=0;i<s.length();i++){
                 mp[s[i]]++;
                 maxfre=max(maxfre,mp[s[i]]);
                
                     while(i-j+1-maxfre>k){
                         mp[s[j]]--;
                         if(mp[s[j]]==0)mp.erase(s[j]);
                         j++;
                     }
                 ans=max(ans,i-j+1);
             }
             return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends