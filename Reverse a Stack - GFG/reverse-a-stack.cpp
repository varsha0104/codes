// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:


    void insert_at_bottom(stack<int> &St,int x){
        if(St.empty()){
            St.push(x);
        }
        else{
            int n=St.top();
            St.pop();
            insert_at_bottom(St,x);
            St.push(n);
        }
    }
    void solve(stack<int> &St){
        if(!St.empty()){
            int num=St.top();
            St.pop();
            solve(St);
            insert_at_bottom(St,num);
        }
    }
    vector<int> Reverse(stack<int> St){
        solve(St);
        vector<int> ans;
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends