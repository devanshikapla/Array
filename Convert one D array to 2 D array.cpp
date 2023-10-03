class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector < vector < int >> ans;
        if(m * n != original.size()) return ans;
        int index = 0;
        for(int i = 0 ; i < m ; i++){
            vector < int > col ; 
            for(int j = 0 ; j < n ; j++){
                col.push_back(original[index++]);
            }
            ans.push_back(col);
        }
        return ans;
    }
};
