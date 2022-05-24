// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> m;
        
        //map all the string characters
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        
        char ch;
        int maxi=0; //maximum count of a character 
        
        for (auto it=m.begin();it!=m.end();it++){
        
        //if character count is greater than maximum
        //than store the character in ch
        //and store count in maxi
            if(it->second > maxi){      
                ch=it->first;
                maxi = it->second;
            }
        }
        return ch;
    }
};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends