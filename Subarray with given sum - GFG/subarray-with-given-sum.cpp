//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//class Solution
//{
    //public:
    //vector<int> subarraySum(int arr[], int n, long long s)
    //{
    //     vector<int> v;

    //     long long int sum=0 , 
    //     int k=0 , l=0;
        
    //     if(s==0)
    //     {
    //         v.push_back(-1);
    //         return v;
    //     }

    //     for(int i=0;i<n;i++)
    //     {
    //         sum=sum+arr[i];

    //         while(sum > s)
    //         {
    //           sum = sum - arr[k];
    //           k++;
    //         }
    //           if(sum == s)
    //           {
    //               v.push_back(k+1);
    //               v.push_back(i+1);
    //               return v;
    //           }
    //     }   

    //          if(v.empty())
    //          {
    //              v.push_back(-1);
    //          }
    //          return v;
    //     }
//};


class Solution
{
    public:
        vector<int> subarraySum(vector<int>arr, int n, long long s)
            {
                int sum=0;
                int i=0,j=0;
                while(i<n && j<=n){
                    if(sum<s){
                        sum+=arr[j];
                        j++;
                    }
                    else if(sum>s){
                        sum-=arr[i];
                        i++;
                    }
                    else if(s==0){
                        return {-1};
                    }
                    else if(sum==s){
                        return{i+1,j};
                        break;
                    }
                }
                return {-1};
                // Your code here
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends