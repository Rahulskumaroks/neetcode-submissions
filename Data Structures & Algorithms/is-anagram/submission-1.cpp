class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> ma;

        for(int i=0;i<n;i++){
            ma[s[i]]++;
        }
        for(int i=0;i<n;i++){
            ma[t[i]]--;
        }
        for(auto it : ma){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
