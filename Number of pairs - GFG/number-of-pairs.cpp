// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    
    long long Solve(int val,int Y[],int freq[],int M, int N)
    {
       //Your code here
      long long int pos = 0;
       long long int res= 0;
       if(val==0)
       {
           return 0;
       }
       if(val==1)
       {
           return freq[0];
       }
       
       pos = upper_bound(Y,Y+N,val)-Y;
       
       res = res + (N - pos) + freq[0]+freq[1];
       
       if(val==2)
       {
           res = res - (freq[3] + freq[4]);
       }
       if(val==3)
       {
           res = res + freq[2];
       }
       return res;
    }
    
   long long countPairs(int X[], int Y[], int M, int N)
   {
       int freq[5] = {0};
       
       long long int count = 0;
       
       for(int i=0;i<N;i++)
       {
           if(Y[i]<5)
           {
               freq[Y[i]]++;
           }
       }
       
       sort(Y,Y+N);
       
       for(int i=0;i<M;i++)
       {
           count = count + Solve(X[i],Y,freq,M,N);
       }
       return count;
    }

/*

    long long countPairs(int X[], int Y[], int M, int N)
   {
      long long count = 0;
      sort(Y,Y+N);
      int count1=0,count2=0,count3=0,count4=0; //taking count of 1,2,3,4's occurances
      for(int i=0;i<N;i++)
      {
          if(Y[i]>4)
          break;

          if(Y[i]==1)
          count1++;
          else if(Y[i]==2)
          count2++;
          else if(Y[i]==3)
          count3++;
          else if(Y[i]==4)
          count4++;
      }
      for(int i=0;i<M;i++) // Now handle the exceptions 
      {
          if(X[i]==0) // handling exceptions
          continue;
          else if(X[i]==1) // handling exceptions
          {
             for(int j=0;j<N;j++)
             {
                 if(Y[j]==0)
                 count++;
                 else
                 break;
             }
          }
          else
          {
              int j = upper_bound(Y,Y+N,X[i])-Y;  // it gives the index of element just grater than X[i] or N if no such element is not present
              if(j!=N)
              count += N-j;


              if(X[i]==2)  // handling exceptions
              count = count - count3 - count4;


              if(X[i]==3)// handling exceptions
              count = count + count2;


              count += count1; // handling exceptions
          }
      }
      return count;
   }
  */
   
};




// { Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}  // } Driver Code Ends