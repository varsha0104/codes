// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void solve(stack<int>&s, int count , int size){
        if(count==(size/2)){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        
        //recursive call
        solve(s,count+1,size);
        
        s.push(num);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count=0;
        solve(s,count,sizeOfStack);
    }
    
    
    /*
    void deleteMid(stack<int>&s, int sz)
   {
       if(s.size()==(int)(ceil(sz+1)/2))
       {
           s.pop();
           return ;
       }
       int s1=s.top();
       s.pop();
       deleteMid(s,sz);
       s.push(s1);
       return ;
   }
   */
   
   /*
   
   void deleteMid(stack<int>&s, int sizeOfStack)
   {
       // code here.. 
       stack<int>st;
       int mid=sizeOfStack/2;
       for(int i=0;i<mid;i++){
           st.push(s.top());
           s.pop();
       }
       s.pop();
       while(!st.empty()){
           s.push(st.top());
           st.pop();
       }
       
   }
   */
   
   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends