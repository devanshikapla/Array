class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minElement = INT_MAX;
        if(n == 1) return 1;
        int minElementIndex = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]  < minElement){
                minElement = nums[i];
                minElementIndex = i;

            }
        }
        int maxElement = INT_MIN;
        int maxElementIndex = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxElement){
                maxElement = nums[i];
                maxElementIndex = i;
            }
        }
        if(minElementIndex > maxElementIndex) swap(minElementIndex , maxElementIndex);
        int totalSteps = min ({minElementIndex + 1 + n - maxElementIndex , n - minElementIndex , maxElementIndex + 1});
        return totalSteps;
    }
};
