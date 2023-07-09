Brute force
class Solution {
    public:
    int kadanes(vector < int > & nums){
        int n = nums.size();
        int sum = 0;
        int maxi = nums[0];
        for(int i = 0 ; i < n ; i++){
            sum = sum + nums[i];
            maxi = max(maxi , sum);
            if(sum < 0){
                sum = 0;
            }

        }
        return maxi;

    }
    void rotate(vector < int > & nums){
        int n = nums.size();
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+1%n);
        reverse(nums.begin()+1%n,nums.end());
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int res = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            rotate(nums);
            sum = kadanes(nums);
            res = max(sum, res);
        }
        return res;
    }
};
Optimized approach
class Solution {
public:
    
    int kadanesMax(vector<int>& nums, int n) {
        int sum = 0;
        int maxi  = nums[0];
        
        for(int i = 0; i<n; i++) {
            sum  = sum + nums[i];
            maxi = max(sum , maxi);
            if(sum < 0) sum = 0;
        }
        
        return maxi;
    }
    
    int kadanesMin(vector<int>& nums, int n) {
        int sum     = nums[0];
        int minSum  = nums[0];
        
        for(int i = 1; i<n; i++) {
            sum     = min(sum + nums[i], nums[i]);
            minSum  = min(minSum, sum);
        }
        
        return minSum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int SUM = accumulate(begin(nums), end(nums), 0);
        
        int minSum = kadanesMin(nums, n);
        
        int maxSum = kadanesMax(nums, n);
        
        int circSum = SUM - minSum;
        
        if(maxSum > 0) {
            return max(maxSum, circSum);
        }
        
        return maxSum;
    }
};
