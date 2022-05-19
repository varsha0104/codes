// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
        vector<int>factorial(int n){
            //code here
            vector<int>res;
            //factorial of 0 or factorial 1 is == 1
            //minimum answer would be 1
            res.push_back(1);
            //we would iterate from 2 to the number itself
            for(int x=2; x<=n; x++){
                int carry=0;
                //we are going from the back to the front of the vector
                for(int i=0; i<res.size(); i++){
                    int val = res[i]*x+carry;
                    res[i]=val % 10;    //2
                    carry=val / 10;     
                }
                
        //vector has no element left and if carry is greater than 0 , simply append the carry
               while(carry!=0){
                    res.push_back(carry % 10);
                    carry /= 10;
               }
            }
            reverse(res.begin(),res.end());
            return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends