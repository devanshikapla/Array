class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector < bool > ans;

        int maxElement = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(candies[i] > maxElement){
                maxElement = candies[i];
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(candies[i] + extraCandies >= maxElement){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
    
        }
        return ans;
    }

};
