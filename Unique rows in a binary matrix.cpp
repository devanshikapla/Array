vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        set < vector < int >> st;
        vector < vector < int >> ans;
        for(int i = 0 ; i < row ; i++){
            vector < int > res;
            for(int j = 0 ; j < col ; j++){
                res.push_back(M[i][j]);
            }
            if(st.find(res) == st.end()){
                ans.push_back(res);
                st.insert(res);
            }
        }
        return ans;
    }
