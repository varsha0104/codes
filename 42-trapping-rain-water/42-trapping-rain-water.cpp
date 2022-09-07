class Solution {
public:
    int trap(vector<int>& arr) {
        /*
        int n = height.size();
        int* left = new int[n];
        int* right = new int[n];
        
        int left[0] = height[0]
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }
        
        int right[n-1] = height[n-1];
        for(int i=n-2;i>=0;i++){
            right[i] = max(right[i+1],height[i]);
        }
        
        int ans=0;
        for(int i = 0;i<n;i++){
            ans+=min(left[i],right[i])-height[i];
        }
        return ans;
        */
        
        int n=arr.size();
        
        if(n==0) return 0;

        int lmax[n],rmax[n],res=0;
        
        lmax[0]=arr[0];
        for(int i=1;i<n;i++)
            lmax[i]=max(lmax[i-1],arr[i]);

        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
            rmax[i]=max(arr[i],rmax[i+1]);

        for(int i=1;i<n-1;i++)
            res += min(lmax[i],rmax[i])-arr[i];

        return res;
        }
};