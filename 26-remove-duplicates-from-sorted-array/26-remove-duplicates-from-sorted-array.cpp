class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0,n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[j++]=nums[i];
            }
        }
        nums[j++]=nums[n-1];
        return j;
        
        
        /*
        if (nums.size() == 0) 
            return 0;
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }
        return j + 1;
        */
    }
};