//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int isDivisible(string s){
	    int n = s.size();
	    int e = 0;
	    int o = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(s[i] ==  '1'){
	            if(i % 2 == 0){
	                e++;
	            }
	            else if(i % 2 != 0){
	                o++;
	            }
	        }
	    }
	    
	    int flag = abs(e - o) % 3;

	    if(flag == 0){
	        return 1;
	    }
	    return 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends