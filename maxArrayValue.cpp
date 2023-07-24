class Solution {
public:
    /*
        nums = [2,3,7,9,3]
        The thing i can do is I can start from the right and i will pick two elements and add them up so that right part becomes greater than left part

        2,3,7,9,3   <- Direction of movement of loop

        We are finding the subarray sum from the back which will be more than previous number




    */
    long long maxArrayValue(vector<int>& nums) {
        long long n = nums.size();
        long long ans = 0;
        long long currSum = 0;

        for(long long i = n - 1; i >= 0 ; i--){
            currSum += nums[i];

            ans = max(ans , currSum);

            if((i - 1) >= 0 && currSum < nums[i - 1]){
                currSum = 0;
            }
        }
        return ans;

    }
};
