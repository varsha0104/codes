// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	// code here
    long long ans = arr[0];
    long long max_num = ans;
	long long min_num = ans;
                        	    
    for(int i=1; i<n; i++){
        if(arr[i]<0){
             swap(max_num,min_num);
        }
        
        max_num = max((long long)arr[i],arr[i]*max_num);
        min_num = min((long long)arr[i],arr[i]*min_num);
                        	        
        ans = max(ans,max_num);
    }
    
    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends