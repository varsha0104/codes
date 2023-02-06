//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_map<char,int>mp;
    string ans="";
    for(int i:s){
        mp[i]++;
        if(mp[i]>1){
            ans.push_back(i);
            return ans;
        }
    }
    return "-1";
}