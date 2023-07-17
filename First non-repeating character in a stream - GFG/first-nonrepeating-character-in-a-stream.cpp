//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A)
		{
		    map<char,long long int>freq;
            queue<char> q;
            string s = "";
            
            for(int i = 0; i < A.size(); i++)
            {
                if(freq[A[i]] == 0) 
                    q.push(A[i]);
                freq[A[i]]++;
                
                while(freq[q.front()]>1 && !q.empty())
                {
                    q.pop();
                }
                if(q.empty()) 
                    s+='#';
                else 
                    s+= q.front();
            }
            return s;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends