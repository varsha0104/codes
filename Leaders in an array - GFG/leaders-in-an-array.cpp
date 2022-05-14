// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    
    /*
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> s;
       int k=a[n-1],l=n-2;
       for(int i=n-2;i>=0;i--){
           if(a[i]>=k)
               {a[l]=a[i];
                k=a[i];
                l--;}
       }
       for(int i=l+1;i<n;i++){
           s.push_back(a[i]);
       }
       return s;
    }
*/


/*
    vector<int> leaders(int a[], int n){
        // Code here
           vector<int>v;
           v.push_back(a[n-1]);
           int mx=a[n-1];
           for(int i=n-2;i>=0;i--){
               int curr=a[i];
               mx=max(mx,curr);
               if(a[i]>=mx){
               v.push_back(a[i]);
               
               }
           }
           reverse(v.begin(),v.end());
           return v;
   }
   
*/

/*
vector<int> leaders(int a[], int n){
        vector<int>x;
        stack<int>s;
        s.push(a[n-1]);
        for(int i=n-1;i>=0;i--)     //it should be i=n-2;
        {
            if(a[i]>=s.top())
            {
                s.push(a[i]);
                x.push_back(a[i]);
            }
        }
        reverse(x.begin(),x.end());
        return x;
    }
*/



/*
Simple approach would be taking a variable max and running the loop from the end 
and comparing each element with last max element if bigger then update the max 
variable and add the element to another array or stack.
Then print the stack.
*/


//correct
vector<int> leaders(int arr[], int n){
       // Code here
       vector<int>v;
       stack<int>st;
       for(int i = 0 ; i < n ; ++i){
           while(!st.empty() and arr[i]>st.top()){
               st.pop();
           }
           st.push(arr[i]);
       }
       while(!st.empty()){
           v.push_back(st.top());
           st.pop();
       }
       reverse(v.begin(),v.end());
       return v;
   }
   
   
   
   /* correct
   vector<int> leaders(int a[], int n){
        vector<int> v;
        
        long long max = a[n-1];
        
        //We start traversing the array from last element.
        for(long long i =n-1; i >= 0; i--){
            //Comparing the current element with the maximum element stored. 
            //If current element is greater than max, we add the element.
            if(a[i] >= max){
                //Updating the maximum element.
                max = a[i];
                //Storing the current element in vector for leaders.
                v.push_back(max);
            }
        }
        //Finally reversing the vector in which leaders are stored.
        reverse(v.begin(), v.end());
        //returning the vector.
        return v;
        
    }
   */
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends