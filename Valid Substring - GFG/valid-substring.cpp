//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {

        int curr =s.size();
        int maxi=0;
        stack<int>st;

        for(int i=0; i<s.size();i++){
            if(!st.empty() and s[st.top()]=='(' and s[i]==')')
                st.pop();
            else 
                st.push(i);
        }

        while(!st.empty()){
            int ele = curr-st.top()-1;
            maxi = max(ele,maxi);
            curr = st.top();
            st.pop();
        }

        maxi =max(curr,maxi);
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends