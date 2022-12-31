//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        vector<pair<int,int>>p;
        for(int i=0;i<N;i++){
            p.push_back({start[i],1});
            p.push_back({end[i],-1});
        }
        sort(p.begin(),p.end());
        int ans=1;
        for(int i=1;i<p.size();i++){
            p[i].second+=p[i-1].second;
            ans=max(ans, p[i].second);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends