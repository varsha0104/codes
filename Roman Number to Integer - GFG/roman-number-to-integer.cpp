// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
  /*
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int> m;
           m['I']=1;
           m['V']=5;
           m['X']=10;
           m['L']=50;
           m['C']=100;
           m['D']=500;
           m['M']=1000;
           int n=str.length();
           int ans=0;
           for (int i = 0; i < n; i++)
           {
        if (m[str[i]]>=m[str[i+1]])
               {
                   
               ans+=m[str[i]];
               }
               else{
                   ans-=m[str[i]];
               }    }
           return ans;
    }
    
    */
    
    /*
    int romanToDecimal(string &str) {
        // code here
        map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int val=0;
        int pre=INT_MAX;
        for(int i=0;i<str.size();i++){
            if(mp[str[i]]>=mp[str[i+1]]){
                val+=mp[str[i]];
            }else{
                val-=mp[str[i]];
            }
        }
        return val;
    }
    */
    
    int romanToDecimal(string &str) {
       // code here
       map<char,int> m;
       
       m.insert({'I',1});
       m.insert({'V',5});
       m.insert({'X',10});
       m.insert({'L',50});
       m.insert({'C',100});
       m.insert({'D',500});
       m.insert({'M',1000});
       
       int n=str.size();
       char ch=str[n-1];
       int sum=m[ch];
       int prev=sum;
       for(int i=str.size()-2;i>=0;i--)
       {
           char ch=str[i];
           if(m[ch]>=prev)
           {
               sum+=m[ch];
           }
           else
           {
               sum-=m[ch];
           }
           prev=m[ch];
       }
       
       
       return sum;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends