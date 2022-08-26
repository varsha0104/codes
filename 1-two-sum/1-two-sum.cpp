class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
         vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;        //time complexity o(n)
      */
        
        
        vector<int> index;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            int k=target-nums[i];
            for(int j=i+1;j<size;j++)
            {
                if(nums[j]==k)
                {
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
            if(index.size()==2)
                break;
        }
        return index; //time complexity o(n^2)
    }
};