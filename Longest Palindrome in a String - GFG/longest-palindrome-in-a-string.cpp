// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
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

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends