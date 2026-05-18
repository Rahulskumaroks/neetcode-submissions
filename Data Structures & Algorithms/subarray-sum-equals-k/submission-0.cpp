class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int maxlength =0;
        unordered_map<int,int> ma;
        ma[0]=1;
        int currSum =0;
        int count =0;
        for(int i=0;i<nums.size();i++){
            currSum += nums[i];
            if(ma.find(currSum-k)!=ma.end()){
              count += ma[currSum-k];
            }
            ma[currSum]++;
        }
        return count;
    }
};