class Solution {
public:
    // int findKthPositive(vector<int>& arr, int k) {
    //     int n = arr.size();
    //     int start = 0, end = n - 1, mid, ans;
    //     while (start <= end)
    //     {
    //         mid = start + (end - start) / 2;
    //         int missed = arr[mid] - mid - 1;
    //         if (missed >= k)
    //         {
    //             ans = arr[mid] - (missed - k) - 1;
    //             end = mid - 1;
    //         }
    //         if (missed < k)
    //         {
    //             start = mid + 1;  
    //             ans = arr[mid] + k - missed; 
    //         }
    //     }
    //     return ans;
    // }
    
    
    
    
    int findKthPositive(vector<int>& A, int k) {
       int low = 0;
       int high = A.size()-1 ;
       int mid;
       while (low <= high) {
            mid = (low + high) / 2;
            if (A[mid] - (1 + mid) < k)  //A[m]-(m+1)   --> This gives umber of missing number before m'th index
                low = mid + 1;
            else
                high = mid-1;
        }
        return low + k;
    }

    
};