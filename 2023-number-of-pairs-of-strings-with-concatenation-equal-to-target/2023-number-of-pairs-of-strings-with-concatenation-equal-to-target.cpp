class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
    int n=nums.size();
    int ans=0;
    unordered_map<string,int> mp;
    for(int i=0;i<n;++i){
        mp[nums[i]]++;
    }
    for(int i=0;i<n;++i){
        if(nums[i]==target.substr(0,nums[i].size())){
            //If there is a match, calculate the remaining part of the target string (remaining) by removing the prefix from it.
            string remaining=target.substr(nums[i].size());
            //If remaining exists in the map, increment ans by the frequency of remaining in the map (mp[remaining]).
            if(mp.find(remaining)!=mp.end()){
                ans+=mp[remaining];
                // don't count the same string twice
                if(remaining==nums[i]){
                    ans--;
                }
            }
        }
    }
    return ans;
}
};