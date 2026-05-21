class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> res;
        deque<int> dq; // stores indices

        for (int i = 0; i < n; i++) {

            // Remove indices outside window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Maintain decreasing deque
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // Window formed
            if (i >= k - 1) {
                res.push_back(nums[dq.front()]);
            }
        }

        return res;
    }
};