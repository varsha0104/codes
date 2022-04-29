// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

/*

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
       int mini=INT_MAX;
       sort(arr.begin(),arr.end());
       int m=0;
       for(int i=0;i<arr.size();i++){
           int j=i+1;
           int k=arr.size()-1;
           while(j<k){
               if(arr[i]+arr[j]+arr[k]==target){
                   return target;
               }
               else if(arr[i]+arr[j]+arr[k]<target){
                   int len=abs((arr[i]+arr[j]+arr[k])-target);
                   if(mini>len){
                       mini=len;
                       m=arr[i]+arr[j]+arr[k];
                   }
                   j++;
               }
               else{
                   int len=abs((arr[i]+arr[j]+arr[k])-target);
                   if(mini>=len){
                       mini=len;
                       m=arr[i]+arr[j]+arr[k];
                   }
                   k--;
               }
           }
       }
       return m;
    }
};
*/


/*
class Solution{
  public:

    int threeSumClosest(vector<int> arr, int target) {
        int flag=0,n = arr.size();
        int res;
        
        // Sort the array 
        sort(arr.begin(),arr.end());
        
        // Fix the smallest number among the three integers 
        for(int i = 0 ; i < n-2 ; ++ i ) {
    
        // Two pointers initially pointing at the last 
        //  and the element next to the fixed element 
            int j = i+1, k = n-1;
            
            // While there could be more pairs to check 
            while(j<k) {
    
                // Calculate the sum of the current triplet 
                int sum=arr[i]+arr[j]+arr[k];
                
                if(!flag){
                    res=sum;
                    flag=1;
                }
                
                // If sum is closer than current closest sum 
                if(abs(sum-target)<abs(res-target)) 
                    res=sum;
                
                else if(abs(sum-target)==abs(res-target)) {
                  if(sum>res)
                    res=sum;
                }
                
                // If sum is greater than target increment first pointer
                if(target>sum)
                    j++;
                // Else decrement second pointer
                else
                    k--;
            }
        }
        return res;
    }
};
*/

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
              int minDiff=0,
              n = arr.size();
              int closestSum;
       
           sort(arr.begin(),arr.end());
    
             for(int i = 0 ; i < n-2 ;  i++) {
    
           int start= i+1, end = n-1;
    
              while(start<end) {
    
               int tripletSum=arr[i]+arr[start]+arr[end];
               
               if(!minDiff){
                    closestSum=tripletSum;
                    minDiff=1;
               }
    
               if(abs(tripletSum-target)<abs( closestSum-target)) 
                   closestSum=tripletSum;
               
               else if(abs(tripletSum-target)==abs( closestSum-target)) {
                 if(tripletSum> closestSum)
                   closestSum=tripletSum;
               }
    
               if(target>tripletSum)
                   start++;
               else
                   end--;
           }
       }
       return  closestSum;
  }
};



// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        int n,target;
        cin >> n >> target;
        
        vector<int> vec(n);
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        Solution obj;
        cout << obj.threeSumClosest(vec, target) << "\n";
    }
}

//Position this line where user code will be pasted.
  // } Driver Code Ends
