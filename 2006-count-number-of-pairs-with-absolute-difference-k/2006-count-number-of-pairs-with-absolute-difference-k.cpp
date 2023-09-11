class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
            int n=nums.size();
            int maxi=*max_element(nums.begin(),nums.end());

            vector<int> arr(maxi+1,0);
            
            for(int i=0;i<n;i++)
            {
                    arr[nums[i]]++;
            }
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    if(nums[i]+k<maxi+1)
                        ans+=arr[nums[i]+k];
            }
            return ans;
    }
};