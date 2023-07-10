class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector < int > result;
        for(int i = 0 ; i < m ; i++){
            int row = 0;
            int col = i;
            bool stop = true;
            while(row < n && col < m){
                if(grid[row][col] == 1){
                    if(col == m - 1 || grid[row][col + 1] == -1){
                        stop = false;
                        break;
                    }
                    col++;
                }
                else if(grid[row][col] == -1){
                    if(col == 0 || grid[row][col - 1] == 1){
                        stop = false;
                        break;
                    }
                    col--;
                }
                row++;
            }
            if(stop == true) result.push_back(col);
            else result.push_back(-1);
        }
        return result;
    }
};
