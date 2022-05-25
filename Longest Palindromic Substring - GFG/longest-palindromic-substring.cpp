// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here 
         int i,high,low,len,start=0,max=1,even=0;
            len=S.size();
            if(len%2==0){
                even=1;
            }
            for(i=1;i<len;i++){
                low=i-1;
                high=i;
                while(low>=0 && high<len && S[low]==S[high]){
                    if(high-low+1>max){
                        max=high-low+1;
                        start=low;
                    }
                    --low;
                    ++high;
                }
                low=i-1;
                high=i+1;
                while(low>=0 && high<len && S[low]==S[high]){
                    if(high-low+1>max){
                        max=high-low+1;
                        start=low;
                    }
                    --low;
                    ++high;
                }
                
            }
            return S.substr (start,max);
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends