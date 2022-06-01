// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    string k="";
    
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            s[i]-=32;
        }
       if(s[i]=='A'|| s[i]=='B' || s[i]=='C') 
       k+="2";
       
       if(s[i]=='D'|| s[i]=='E' || s[i]=='F') 
       k+="3";
       
       if(s[i]=='G'|| s[i]=='H' || s[i]=='I') 
       k+="4";
       
       if(s[i]=='J'|| s[i]=='K' || s[i]=='L') 
       k+="5";
       
       if(s[i]=='M'|| s[i]=='N' || s[i]=='O') 
       k+="6";
       
       if(s[i]=='P'|| s[i]=='Q' || s[i]=='R' || s[i]=='S') 
       k+="7";
       
       if(s[i]=='T'|| s[i]=='U' || s[i]=='V') 
       k+="8";
       
       if(s[i]=='W'|| s[i]=='X' || s[i]=='Y' || s[i]=='Z') 
       k+="9";
       
      
    }
   
    return k;
}
