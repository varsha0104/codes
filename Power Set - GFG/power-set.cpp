//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// class Solution{
//     vector<string>ans;
// 	    void solve(string s,string temp){
// 	        if(s.length()==0){
// 	            if(temp!="")   ans.push_back(temp);
// 	            return;
// 	        }
// 	        solve(s.substr(1),temp);
// 	        solve(s.substr(1),temp+s[0]);
// 	        return;
// 	    }
	    
	    
// 	public:  
// 		vector<string> AllPossibleStrings(string s){
// 		    // Code here
// 		    string temp="";
// 		    solve(s,temp);
// 		    sort(ans.begin(),ans.end());
// 		    return ans;
// 		}
// };



// class Solution{
//     void solve(vector<string>&ans,int i,int n,string op,string s){
//             if(i==n){
//                 if(op!="")
//                 ans.push_back(op);
//                 return ;
//             }
//             solve(ans,i+1,n,op+s[i],s);//include
//              solve(ans,i+1,n,op,s);//exclude
//         }
        
//         public:
//             vector<string> AllPossibleStrings(string s){
//                 vector<string>ans;
//                 solve(ans,0,s.length(),"",s);
//                 sort(ans.begin(),ans.end());
//                 return ans;
//             }
// };



class Solution{
    vector<string> res;
            void solve(int i, string curr, string &s) 
            {
                if(i==s.size()) {
                    if(curr!="")
                        res.push_back(curr);
                        return;
                }
                solve(i+1, curr+s[i], s);
                solve(i+1, curr, s);
            }
            
    public:
            vector<string> AllPossibleStrings(string s)
            {
                string curr = "";
                solve(0, curr, s);
                sort(res.begin(), res.end());
                return res;
            }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends