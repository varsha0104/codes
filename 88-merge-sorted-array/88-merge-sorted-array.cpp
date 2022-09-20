class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j =n-1;
        int tar = n+m-1;  //NEW ARRAY
        
        while (j >=0){
            if (i>=0 && nums1[i] > nums2[j]){       //if first array element is small
                nums1[tar] = nums1[i];              //
                tar -=1;        //
                i -=1;          //ONE ELEMENT FROM 1ST ARRAY IS ADDAED TO nums1[tar] = nums1[i]
            }
            else{
                nums1[tar] = nums2[j];
                tar -=1;
                j -=1;
            }
        }    
    }
};