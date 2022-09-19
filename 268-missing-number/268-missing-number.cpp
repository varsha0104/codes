class Solution {
public:
    /*
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != i){
                return i;
            }else{
                return n;
            }
        }
        return -1;
 }
 */
    
        
    int missingNumber(vector<int>& nums) {
        int sum = 0; // sum of all numbers initially 0
        int total = nums.size()*(nums.size() + 1)/2; // total is the sum of all numbers in the array
        for (auto number : nums) { // iterate through the array
            sum += number; // add the number to the sum
        }
        return total - sum; // return the difference between the sum and the total that is the missing number
    }

};