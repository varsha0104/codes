// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int fingerCount(int N)
    {
        // Write Your Code here
        int r=N%8;
        if(r==0){
            return 2;
        }
        
        if(r<5){
            return r;
        }else{
            r = 10 - r;
             return r;
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.fingerCount(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends