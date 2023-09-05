class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long int sum = 0 , maxi = 0 , i = 0 ; 
        unordered_set<int>s;
        for(int j = 0 ; j < nums.size(); j++){
            while(i<j && (s.count(nums[j]) || s.size() >= k)){
                sum = sum-nums[i];
                s.erase(nums[i]);
                i++;
            }
            sum = sum+nums[j];
            s.insert(nums[j]);
            
            if(s.size() == k)
                maxi = max(maxi , sum);
        }
        return maxi;
    }
};


