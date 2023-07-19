class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(auto it : nums)
        {
            sum = sum + it;
        }
        int sumn = (n*(n + 1))/2;
        unordered_map < int , int > mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
        }
        int ans = -1;
        for(auto it : mpp){
            if(it.second == 2){
                sum = sum - it.first;
                ans = it.first;

            }
        }
        
        return { ans , sumn - sum };
    }
};
