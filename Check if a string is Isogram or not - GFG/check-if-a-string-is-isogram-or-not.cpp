// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    /*
    bool isIsogram(string s)
    {
        //Your code here
         sort(s.begin(), s.end());
       for(int i = 0; i<s.size(); i++){
           if(s[i+1] == s[i]){
               return false;
           }
       }
       return true;
    }
    */
    
    
    bool isIsogram(string s)
   {
       unordered_map<char,int>m1;
       for(int i=0;i<s.length();i++)
       {
           m1[s[i]]++;
       }
       for(int i=0;i<s.length();i++)
       {
           if(m1[s[i]]!=1)
           {
               return false;
           }
       }
       return true;
   }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends