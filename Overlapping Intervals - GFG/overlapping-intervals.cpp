//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         //sort the intervals Array
         sort(intervals.begin() , intervals.end());
         
         int  n = intervals.size();
         
         vector<vector<int>> ans;
         
         for(int i = 0 ; i< n ; i++){
             if(ans.empty())
             {
                 ans.push_back(intervals[i]);
             }
             else 
             {
                 //compare with the last inserted interval
                 vector<int>&v = ans.back();
                 int y = v[1];      //end time of previous interval
                 
                 //overlapping
                 if(intervals[i][0] <= y)
                 {
                     v[1] = max(intervals[i][1] , y);
                 }
                 //not overlapping
                 else
                 {
                     ans.push_back(intervals[i]);
                 }
             }
         }
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends