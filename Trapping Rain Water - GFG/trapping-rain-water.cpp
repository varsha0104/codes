//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int mx=INT_MIN;
        int index=0;
        
        for(int i=0;i<n;i++){
            
			if(mx<arr[i]){
				mx=arr[i];
				index=i;
			}
		}
		long long ans=0;
		int mn=arr[n-1];
		
		for(int i=n-1;i>=index;i--){
		    
			if(arr[i]<mn)
				ans=ans+mn-arr[i];
				
			else mn=arr[i];
		}
		mn=arr[0];
		
		for(int i=0;i<index;i++){
		    
			if(arr[i]<mn)
				ans=ans+mn-arr[i];
				
			else mn=arr[i];
		}
		return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends