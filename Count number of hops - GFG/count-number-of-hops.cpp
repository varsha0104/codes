//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if(n <= 0) return 1;
        long long prev3 = 0, prev2 = 0, prev1 = 1;
        for(int i=0; i<n; i++){
            long long temp = (prev1 + prev2 + prev3)%1000000007;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = temp;
        }
        return prev1%1000000007;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends