// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


 long long int maxSum(int arr[] ,int n)
 {
   sort(arr,arr+n);
   int i = 0 , j = n-1;
   long sum = 0 ; int ptr = 0 ;
   while( i < j )
   {
       sum += arr[j] - arr[i];
       if( ptr == 0 ){
           i++;
           ptr++;
       }else{
           j--;
           ptr--;
       }
   }
   sum += arr[n/2] - arr[0];
   return sum;
   }
   

/*
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
   int i=0;
   int j= n-1;
   long long int sum = 0;
   while(i<j)
   {
       sum += abs(arr[i]-arr[j]);
       sum += abs(arr[i+1]-arr[j]);
       i++;
       j--;
   }
   sum += abs(arr[0]-arr[i]);
   
   return sum;
}
*/
/*
long long int maxSum(int arr[], int n)
{
   sort(arr,arr+n);
   int sum=0;
   int j=n-1;
   int i=0;
   while(i<n){
       sum+=abs(arr[i]-arr[j]);
       j--;
       i++;
   }
   return sum;
} 
*/
/*
long long int maxSum(int arr[], int n)
{
   sort(arr,arr+n);
   vector<int> brr;
   long long sum=0;
   for(int i=0;i<n/2;i++){
       brr.push_back(arr[i]);
       brr.push_back(arr[n-1-i]);
   }
   if(n%2!=0)
       brr.push_back(arr[n/2]);
       
   for(int i=0;i<n-1;i++){
       sum += abs(brr[i]-brr[i+1]);
   }
   sum += abs(brr[n-1]-brr[0]);
   return sum;
}

*/

