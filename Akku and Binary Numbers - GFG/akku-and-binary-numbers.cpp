//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
 #define ll long long
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        ll ans = 0;
        for(ll i = 0; i < 64; i++){
            for(ll j = i + 1; j < 64; j++){
                for(ll k = j + 1; k < 64; k++){
                    ll num = (1LL << i);
                    num |= (1LL << j);
                    num |= (1LL << k);
                    if(num >= l && num <= r){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends