class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        //moore's voting algorithm
        //this element takes initial count = 0 
        //and takes majority element as 0 or 0th index of element of array
        int major=nums[0], count = 1;
        for(int i=1; i<nums.size();i++)
        {
            if(count==0)
            {
                count++;
                major=nums[i];
            }
            else if(major==nums[i])
            {
                count++;
            }
            else 
                count--;
            
        }
        return major;
        */
        
        
        
        int major=0, count = 0;
        for(int i=0; i<nums.size();i++)
        {
            if(count==0)
            {
                count++;
                major=nums[i];
            }
            else if(major==nums[i])
            {
                count++;
            }
            else 
                count--;
            
        }
        return major;
    }
};