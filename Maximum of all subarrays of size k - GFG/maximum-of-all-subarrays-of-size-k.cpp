//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
          vector<int>ans;
          list<int>q;
          int j=0,i=0;
          while(j<n){
              while(!q.empty() && q.back()<arr[j]){
                  q.pop_back();
              }
              q.push_back(arr[j]);
              j++;
              if(j-i<k){ continue;}
            ans.push_back(q.front());
             if(q.front()==arr[i]) q.pop_front();
             i++;
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends