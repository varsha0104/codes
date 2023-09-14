class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int count = 0;
        vector<int>ans(n,0);
        unordered_map<int,int>mp;
        
        if(A[0] == B[0]){
            count++;
            ans[0] = count;
        }
        
        mp[A[0]]++;
        mp[B[0]]++;
        for(int i = 1 ; i < n ; i++){
            if(A[i] == B[i]){
                count++;
            }else{
                if(mp.find(A[i]) != mp.end()){
                    count++;
                }
                if(mp.find(B[i]) != mp.end()){
                    count++;
                }
            }
            ans[i] = count;
            
            mp[A[i]]++;
            mp[B[i]]++;
        }
        return ans;
    }
};