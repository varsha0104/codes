// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:

/*
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        sort(arr.begin(), arr.end());
        int j = 0;
        int count = 0;
        while(K && j < arr.size()){
            if(K >= arr[j]){
                count++;
                K -= arr[j];
            }
            else{
                return count;
            }
            j++;
        }
        return count;
    }
    
*/

    //solve the problem using priority queue
    int toyCount(int N, int K, vector<int> arr){
        //code here
        
        //this prority queue will arrange the elements in increasing order
        priority_queue<int,vector<int>,greater<int>>pq;
        
        //now push all the elements to the priority queue
        for(int i=0;i<N;i++){
            pq.push(arr[i]);
        }
        
        int count=0;    //count the number of toys
        
        //if priority queue is not empty
        while(!pq.empty()){
            
            //now subtract the smallest number(top element) and pop
            K = K - pq.top();
            pq.pop();
            
            //now check if amount is less than zero or not
            //if yes than return the count till now
            if(K<0){
                return count;
            }
            
            //if no than continue the subtract process
            count++;
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends