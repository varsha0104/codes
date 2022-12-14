//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        // max sum subarray
        int sum = 0;
        int mxSum = INT_MIN;
        int left = -1, right = -1;
        int start = 0;
        for(int end = 0; end < n; end++) {
            char ch = str[end];
            sum += (ch == '0' ? 1: -1);
            if(sum > mxSum) {
                mxSum = sum;
                left = start, right = end;
            }
            if(sum < 0) {
                sum = 0;
                start = end + 1;
            }
        }
        if(mxSum == -1) 
            return {-1};
        return {left + 1, right + 1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends