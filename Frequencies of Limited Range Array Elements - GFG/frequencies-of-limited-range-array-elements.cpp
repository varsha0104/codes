// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here.
        
        map<int,int>m;
        for(int i=0;i<N;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<N;i++){
            arr[i] = m[i+1];
        }
    }
    
    /*
    //Create a frequency array and store the frequency
        // of all the element
        int maxi = max(P,N);
    	vector<int> count(maxi+1,0);
        for(int i=0;i<N;i++){
            count[arr[i]]+=1;
        }
        for(int i=0;i<N;i++){
            arr[i] = count[i+1];
        }
    */
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}




  // } Driver Code Ends