//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int sum)
    {
        // code here
        unordered_map<int,int>prevSum;
        int currSum = 0 , res = 0;
        
        for(int i = 0 ; i < N ; i++){
            currSum += Arr[i];
            
            if(currSum == sum)
                res++;
            
            if(prevSum.find(currSum - sum) != prevSum.end())
                res += prevSum[currSum - sum];
            
            prevSum[currSum]++;
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends