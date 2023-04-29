//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long N){
        long ans = 0 , num = 1;
        while(N != 0){
            if(N%5==0){
                ans += 9 * num;
               N = N/5 - 1;
            }else if(N%5==1){
                ans += 1 * num;
                N = N/5;
            }else if(N%5==2){
                 ans += 3 * num;
                 N = N/5;
            }else if(N%5==3){
                 ans += 5 * num;
                 N = N/5;
            }else if(N%5==4){
                 ans += 7 * num;
                 N = N/5;
            }
            num = num * 10;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends