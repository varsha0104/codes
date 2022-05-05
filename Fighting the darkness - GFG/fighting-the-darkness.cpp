// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

/*
class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here   
         sort(arr,arr+n);
        return arr[n-1];
        int maximum=INT_MIN;
        maximum=max(arr[i],)
    }
};
*/


class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here   
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            maximum=max(maximum,arr[i]);
        }
        return maximum;
    }
};

// { Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.maxDays(arr, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends