class Solution {
public:
    //Generating all subsets using backtracking

    void generateSubSets(vector < int > & nums , int index , vector < int > & ans , vector < int > & ds){
        if(index == nums.size()){
            int x = 0;
            for(auto it : ds){
                x ^= it;
            }
            ans.push_back(x);
            return;
        }
        ds.push_back(nums[index]);
        generateSubSets(nums , index + 1 , ans , ds);
        ds.pop_back();
        generateSubSets(nums , index + 1 , ans , ds);
    }
    int subsetXORSum(vector<int>& nums) {
        vector < int > ans;
        vector < int > ds;
        generateSubSets(nums , 0  , ans , ds);
        int sum = 0;
        for(auto it : ans){
            sum += it;
        }
        return sum;
    }
};
