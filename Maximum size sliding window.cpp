class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector < int > ans;
        list < int > res;
        int i = 0;
        int j = 0;
        int n = nums.size();
        while(j < n){
            while(res.size() > 0 && res.back() < nums[j]){
                res.pop_back();
            }
            res.push_back(nums[j]);
            if(j - i + 1 < k) j++;
            else if(j - i + 1 == k){
                ans.push_back(res.front());
                if(res.front() == nums[i]){
                    res.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
