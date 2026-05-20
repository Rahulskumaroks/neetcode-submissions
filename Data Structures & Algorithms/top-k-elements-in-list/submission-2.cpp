class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ma;
        for(int i=0;i<nums.size();i++){
            ma[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;

        for(auto it : ma){
            pq.push({it.second,it.first});
        }
        vector<int> res;
        while(!pq.empty() && k>0){
              int top = pq.top().second;
              k--;
              res.push_back(top);
              pq.pop();
        }
        return res;
        
      
    }
};
