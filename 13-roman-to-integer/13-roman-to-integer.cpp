class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> mp = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
	int res = mp[s.back()];   
	for(int i = 0; i < s.size() - 1; i++) 
    {
            // if the value of the next element is greater than previous one 
            // for example if we encounter IX , then basically we need to subtract the value of 'I' from value of 'X' and               then add to answer and then also increment the iterator i by 2 , as we have already considered i+1 element
            // 'IX'= 10-1=9
            // 'XL'= 50-10=40
            // 'IV'= 5-1=4
		if(mp[s[i]] < mp[s[i + 1]]) res -= mp[s[i]];
		else res += mp[s[i]];
	}
	return res;
    }
};