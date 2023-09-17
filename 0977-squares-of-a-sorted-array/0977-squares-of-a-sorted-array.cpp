class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int i = 0 , j = nums.size()-1, index = nums.size()-1;
        while(i <= j){
            int val1 = nums[i]*nums[i];
            int val2 = nums[j]*nums[j];
            
            if(val1 > val2){
                ans[index] = val1;
                i++;
            }else{
                ans[index] = val2;
                j--;
            }
            index--;
        }
        return ans;
    }
};