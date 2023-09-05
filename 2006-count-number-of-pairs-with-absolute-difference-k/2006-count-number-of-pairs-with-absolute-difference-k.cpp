class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int count=0;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i]+k)!=map.end()){
                count+=map[nums[i]+k];
            }
        }
        return count;
        
    }
};