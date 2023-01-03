//{ Driver Code Starts
// C++ program for pendulum arrangement of numbers
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Returns pendulam arrangement of arr[]
vector<int> pendulumArrangement(int arr[], int n) {
  vector<int> v(n);
  sort(arr,arr+n);
  int start = 0,end = n-1, mid=0;
  
  start=end=mid=(n-1)/2;
  v[mid]=arr[0];
  
  
  for(int i=1;i<n;i++ )
  {
      if(i&1)
      v[++end]=arr[i];
      else
       v[--start]=arr[i];   
  }
  return v;
}


//{ Driver Code Starts.

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = pendulumArrangement(arr, n);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends