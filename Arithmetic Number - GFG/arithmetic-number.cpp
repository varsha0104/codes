//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int A, int B, int C){
        
        //Tn = a + (n-1)*d
            if(C==0)
            {
                return A==B;
            }
            
           return (B-A)%C==0 && (B-A)/C>=0;
        }
};


// class Solution{
// public:
//     int inSequence(int A, int B, int C){
//         // code here
//         if(C==0)
//             return A==B;
            
//         int n=(B-A)/C+1;

//         if(n<=0)
//             return 0;

//         return B == A+(n-1)*C;
//         return 0;
//     }
// };

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}
// } Driver Code Ends