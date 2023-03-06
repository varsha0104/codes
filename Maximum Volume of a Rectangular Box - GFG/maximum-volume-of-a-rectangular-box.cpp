//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long getVol(int P, int A) {
        
        float l = (P - sqrt(P * P - 24 * A)) / 12;
 
        // calculate volume
        float V = l * (A / 2.0 - l * (P / 4.0 - l));
     
        // return result
        return V;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.getVol(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends