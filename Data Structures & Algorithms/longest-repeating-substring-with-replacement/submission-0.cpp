class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int> charFreq(26);
        
              
        int maxFreq= 0;
         int ans = 0;
        int i=0;
        for(int j=0;j<n;j++){
            charFreq[s[j]-'A']++;
            maxFreq = max(maxFreq,charFreq[s[j]-'A']);
            while((j-i+1)-maxFreq>k){
                 charFreq[s[i]-'A']--;
                 i++;
            }
            ans = max(ans,j-i+1);

        }
        return ans;
    }
};
