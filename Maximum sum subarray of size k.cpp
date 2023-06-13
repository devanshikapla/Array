lass Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map < int , int > mpp;
        long long sum = 0;
        long long maxi = 0;
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(j < nums.size()){
            //placing all the elements in the map;

            mpp[nums[j]]++;
            //Aditya verma's traditional template;
            sum = sum + nums[j];
            //check if number is present in the map increase the counter so that it could store the frequency of the number;
            if(mpp[nums[j]] == 1) cnt++;
            //if(window size is less than k increment j to attain the window size)
            if((j - i + 1) < k) j++;
            else if((j - i + 1) == k){
                //if window size is attained and check if cnt == k 
                if(cnt == k){
                    //update the maxi;
                    maxi = max(maxi , sum);// maxi is going to store your answer;
                }
                //decrease the frequency;
                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0) cnt--;
                sum = sum - nums[i];
                i++;
                j++;
            }

            
        }
        //ans will be stored in maxi
        return maxi;
    }
};
