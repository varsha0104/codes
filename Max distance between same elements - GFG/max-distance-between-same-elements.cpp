//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
        int maxdis = INT_MIN;
        unordered_map<int,int>map;
        for(int i = 0 ; i < n ; i++){
            if(map.find(arr[i]) == map.end()){
                map[arr[i]] = i;
            }
            maxdis = max(maxdis , i - map[arr[i]]);
        }
        return maxdis;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends