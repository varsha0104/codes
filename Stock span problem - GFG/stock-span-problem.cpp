//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    //similar to nearest greater to left
    vector <int> calculateSpan(int price[], int n)
    {
        stack<pair<int,int>>s;
        vector<int>v;
        
        for(int i=0;i<n;i++){
            if(s.size() == 0){
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top().first>price[i]){
                v.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first <= price[i]){
                while(s.size()>0 && s.top().first <= price[i]){
                    s.pop();
                }
                if(s.size() == 0)
                    v.push_back(-1);
                else
                    v.push_back(s.top().second);
            }
            s.push({price[i],i});
        }
        for(int i=0;i<n;i++){
            v[i] = i-v[i];
        }
        return v;
    }
};





/*
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       //HINT:-
       //the question is similar to the NGL (Next greater element to the left)
       //just find the first greater element on left of no.
       //here instead of no. itself store the indexes
       //lastly subtract the stored index of first greater element from the index of number for whom it was found
       //do this for each array element
       // Optimization occurs by stack O(N)

       vector<int> v(n,-1);

       stack<int> s;

       for(int i=0;i<n;i++)
       {
           if(s.empty())
           {
               s.push(i);
               continue;
           }

           while(price[s.top()]<=price[i])
           {
               s.pop();
               if(s.empty())
               {
                   break;
               }
           }

           if(!s.empty())
           {
               v[i]=s.top();
           }
           s.push(i);
       }
       
       for(int i=0;i<n;i++)
       {
           v[i]=i-v[i];
       }
       return v;
    }
};
*/


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends