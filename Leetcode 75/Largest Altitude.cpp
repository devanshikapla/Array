class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        int ans = 0;
        for(auto it : gain){
            sum +=it ;
            ans = max(ans , sum);
        }
        return ans;
    }
};
