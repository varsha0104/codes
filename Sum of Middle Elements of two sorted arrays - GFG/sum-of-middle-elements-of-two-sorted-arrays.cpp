//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) 
    {
        vector <int> ans;
        int i=0,j=0;
        while(i < n)
        {
            ans.push_back(ar1[i]);
            i++;
        }
        while(j < n)
        {
            ans.push_back(ar2[j]);
            j++;
        }
         
        sort(ans.begin(),ans.end());
        return ans[n-1]+ans[n];
    }
};


// class Solution {
// public:
//     int findMidSum(int ar1[], int ar2[], int N) {
        
//         vector<int>v;
        
//         for(int  i=0;i<n;i++){
//             v.push_back(ar1[i]);
//         }
        
//         for(int i=0;i<n;i++){
//             v.push_back(ar2[i]);
//         }
//          sort(v.begin(),v.end());
           
//         int l=0 , m=v.size()-1 , sum=0;
            
//         while(l<=m){
//             int mid=l+(m-l)/2;
//             sum=v[mid]+v[mid+1];
//             break;
//         }
//         return sum;
// };




// class Solution {
// public:
//     int findMidSum(int ar1[], int ar2[], int N) {
//         int i=0 , j=0 , k = -1 , store = 0 , sum = 0;
        
//         while( i< N && j< N)
//         {
//             if(ar1[i] > ar2[j])
//             {
//               store = ar2[j];
//                 j++;
//             }
//             else
//             {
//                 store = ar1[i];
//                 i++;
//             }

//             k++; 

//             if(k == N-1)
//             sum += store;
            
//             if(k==N){ 
//               sum += store;
//                 break;
//           }
           
//             if(i == N ){
//                 sum += ar2[j];
//                 break;
//             }
            
//             if(j==N){
//               sum += ar1[i];
//               break;
//           }
//         }
//         return sum;
//     }
// };





//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends