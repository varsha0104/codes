//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      vector<int> mat(n,n);
      vector<int> row(n,0);
      vector<long long int> ans;
      int x=0;
      long long int temp=n*n;
      int count=0;
      for(int i=0;i<arr.size();i++){
          
          int col= arr[i][1]-1;
          int ro= arr[i][0]-1;
          if(mat[col]!=0){
              mat[col]= mat[col]-count;
          }
          temp= temp-mat[col];
          if(mat[col]!=0){
              mat[col]=0;
                x++;
          }
          
          if(row[ro]==0){
            temp= temp-n+x;
            count++;
            row[ro]=1;
            }
            ans.push_back(temp);
                
        }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends