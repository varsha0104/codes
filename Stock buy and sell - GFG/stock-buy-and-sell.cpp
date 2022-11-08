//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> a, int n){
        // code here
        vector<vector<int>> index;
        int max = 0, cnt = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (i != 0 && (a[i] > a[i-1] || a[i] == a[i-1])) continue;
            max = a[i];
            cnt = 0;
            for (int j = i+1; j < n; j++)
            {
                if (a[j] > max){
                    cnt = j;
                    max = a[j];
                }
                else if (a[j] < a[i] || a[j] < a[j-1]) break;
            }
            if (cnt != 0)
            {
                index.push_back({i, cnt});
            }
        }
        
        return index;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends