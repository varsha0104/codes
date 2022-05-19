// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/



//for inserting sorted number
void pushing(stack<int> &st,int num){
    //base case
    if(st.empty() || st.top() <= num){
        st.push(num);
        return;
    }
    
    int n = st.top();
    st.pop();
    
    //recursive call
    pushing(st,num);
    
    st.push(n);
}

void recSort(stack<int> &st){
    //base case
    if(st.empty()) 
        return;
    int num = st.top();
    st.pop();
    
    //recursive call
    recSort(st);
    
    
    pushing(st,num);
}

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   recSort(s);
  // return s;
   
}