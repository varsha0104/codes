// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    void help(string s,int low,int high,vector<string>&ans)
    {
        if(low==high)
        {
            ans.push_back(s);
            return ;
        }
        for(int i=low;i<=high;i++)
        {
            swap(s[low],s[i]);
            help(s,low+1,s.length()-1,ans);
            swap(s[low],s[i]);
        }
    }
    
    vector<string> permutation(string s)
    {
        vector<string>ans;
        help(s,0,s.length()-1,ans);
        sort(ans.begin(),ans.end()); //sort karna jaruri hai...order ke liye
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends