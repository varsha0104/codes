// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int a=0,b=0,c=0;
            vector<int>count;
            while(a<n1 && b<n2 && c<n3){
                if(A[a] == B[b] and A[a] == C[c]){
                    count.push_back(A[a]);
                    a++;
                    b++;
                    c++;
                }
                else if(A[a]<B[b])
                    a++;        
                else if(B[b]<C[c])
                    b++;            
                else                //if(C[c]<A[a])
                    c++;    
                    
                //x = take the last element
                int x = A[a-1];     
                int y = B[b-1];   
                int z = C[c-1];     
                
                //if A[a]==x than increase a++ .
                //so the same element will not be inserted in the vector
                while(A[a] == x)
                    a++;        
                while(B[b] == y)
                    b++;        
                while(C[c] == z)
                    c++;
            }
            
            if(count.size() == 0)
                return {-1};
                
            return count;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends