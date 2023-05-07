//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        
        string temp="";
        temp+=str[0]; // first value store karke compare karenge
        
        for(int i=1;i<str.size();i++)
        {
            if(str[i]<temp[i-1]) // 'ca' to a ko add karo kyoki vo chota hai
            {
                temp+=str[i];
            }
            else if(str[i]==temp[i-1] && i!=1) // beech me mila equal to add karo
            {
                temp+=str[i];
            }
            else
            {
                break; // 'aa' starting me dono euqal hai ya
                        // starting wala chota or aage wala bada to break mardo 'bv'
            }
        }
        
        string rev=temp;
        reverse(rev.begin(),rev.end()); // reverse karke aage append kardo
        temp+=rev;
        
        return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends