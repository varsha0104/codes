//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        int i, j;
        int maxpp = INT_MIN;
        int minpp = INT_MAX;
        int maxpm = INT_MIN;
        int minpm = INT_MAX;

        for(i=0; i < n; i++){
            maxpp = max(maxpp, arr[i] + i);
            minpp = min(minpp, arr[i] + i);
            maxpm = max(maxpm, arr[i] - i);
            minpm = min(minpm, arr[i] - i);
        }
        return max(maxpp - minpp, maxpm - minpm);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends