class Solution {
public:
    /*
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
    */
    
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(), nums1.end());
        vector<int> out;
        for (int x : nums2)
            if (s.erase(x))
                out.push_back(x);
        return out;
    }
    
    
    
    /*
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      // put the values in set to remove duplicate
        set<int>s1,s2;
        vector<int>out;
        for(auto val:nums1)
            s1.insert(val);
        for(auto val:nums2)
            s2.insert(val);
        
        //find if we can get the value from first set in second set
        for(auto val:s1)
        {
           if(s2.find(val)!=s2.end()) //if found push it into output vector
               out.push_back(val);
        }
        return out;
    }
    */
    
};