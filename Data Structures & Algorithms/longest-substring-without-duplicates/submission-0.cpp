class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> freq;
        int i=0;
        int maxLength =0;
        for(int j=0;j<n;j++){
            freq[s[j]]++;
            while(freq[s[j]]>1){
                 freq[s[i]]--;
                 if(freq.size()!=0 && freq[s[i]]==0){
                    freq.erase(s[i]);
                 }
                 i++;
            }
            maxLength = max(maxLength,j-i+1);
        }
        return maxLength;
    }
};
