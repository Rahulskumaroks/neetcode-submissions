class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ma;
        for(int i =0;i<nums.size();i++){
            int finds = target- nums[i];    
            if(ma.find(finds)!=ma.end()){
                return {ma[finds],i};
            }   
            ma[nums[i]]=i; 
        }
    }
};
