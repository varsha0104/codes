class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s = 0 , e = n-1 , mid ; 
        while(s <= e){
            mid = s + (e - s)/2;
            if(nums[mid] == target){
                return mid;
            }
            
            //check left side is sorted or not
            if(nums[s] <= nums[mid]){
                //figure out if element lies on left half or not
                if(target >= nums[s] && target <= nums[mid]){
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            //if right half is sorted
            else
            {
                if(target >= nums[mid] && target <= nums[e]){
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};