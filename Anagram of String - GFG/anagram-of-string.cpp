// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram

/*
int remAnagram(string s1, string s2)
{
// Your code goes here
   int cs1[26]={0};
    int i=0,j=0;
    
    while(i<s1.size()||j<s2.size())
    {
        if(i<s1.size())
            cs1[s1[i++]-'a']++;
        if(j<s2.size())
            cs1[s2[j++]-'a']--;
    }
    int o=0;
    for(int i=0;i<26;i++)
        o+=abs(cs1[i]);
    return o;
}
*/


/*
int remAnagram(string str1, string str2)
{
// Your code goes here
   int n1 = str1.length();
   int n2 = str2.length();
   
   vector<int> v1(26,0);
   vector<int> v2(26,0);
   for(int i =0;i<n1;i++){
       v1[str1[i]-'a']++;
   }
   for(int i =0;i<n2;i++){
       v2[str2[i]-'a']++;
   }
   int count = 0;
   for(int i =0;i<26;i++){
       count+=abs(v1[i]-v2[i]);
   }
   return count;
}
*/



int remAnagram(string str1, string str2)
{
    // make hash array for both string and calculate
    // frequency of each character
    int count1[CHARS] = {0}, count2[CHARS] = {0};
 
    // count frequency of each character in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;
 
    // count frequency of each character in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;
 
    // traverse count arrays to find number of characters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
    return result;
}