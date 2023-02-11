//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int ans=0;
        int maxi=0;
        for(int i=0;i<N;i++){
            if(P[i]==0){
                if(S[P[i]]==S[P[i]+1]){
                    maxi=max(i+1,maxi);
                    S[P[i]]='?';
                }
            }
            else if(P[i]==N-1){
                if(S[P[i]]==S[P[i]-1]){
                    maxi=max(i+1,maxi);
                    S[P[i]]='?';
                }
                    
                }
            else{
                if(S[P[i]]==S[P[i]+1] || S[P[i]]==S[P[i]-1]){
                    maxi=max(i+1,maxi);
                    S[P[i]]='?';
                }
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends