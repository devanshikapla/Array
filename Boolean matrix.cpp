    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int n = matrix.size();
        int m = matrix[0].size();
        vector < int > markRow(n , 0);
        vector < int > markCol(m , 0);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 1)
                {
                    markRow[i] = 1;
                    markCol[j] = 1;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(markRow[i] == 1 || markCol[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
    }
};
