class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>m;
        for(auto i:nums){           
            if(m.count(k-i)){
                ans++;      
                m[k-i]--;
                if(m[k-i]==0)
                    m.erase(k-i);
            }  
            else
             m[i]++;
        }
        return ans;
    }
};

// //using map
// class Solution {
// public:
// 	int maxOperations(vector<int>& nums, int k) {
// 		unordered_map<int, int> m;
// 		int ans = 0;
// 		for(int i = 0; i < nums.size(); i++){
// 			if(m[k - nums[i]] > 0){
// 			   m[k - nums[i]]--;
// 				ans++;
// 			}
// 			else{
// 				m[nums[i]]++;
// 			}
// 		}
// 		return ans;
// 	}
// };

// //two pointer
// class Solution {
// public:
//     int maxOperations(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         int i=0;
//         int j=nums.size()-1;
//         int count=0;
//         while(j>i)
//         {
//             if(nums[i]+nums[j]==k)
//             {
//                 i++;
//                 j--;
//                 count++;
//             }
//             else if(nums[i]+nums[j]<k)
//             {
//                 i++;
//             }
//             else
//             {
//                 j--;
//             }
//         }
//         return count;

//     }
// };


