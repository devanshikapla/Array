class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector < int > & row : image){
            reverse(row.begin() , row.end());
            for(auto &it : row){
                if(it == 1){
                    it = it - 1;
                }
                else{
                    it = it + 1;
                }
            }
        }
        return image;
    }
};
