class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&arr)  {
        // code here
        //store the spiral traversal in a vector
        vector < int > ans;
        int top = 0;
        int left = 0;
        int right = C - 1;
        int bottom = R - 1;
        while(top <= bottom && left <= right){
            for(int i = left ; i <= right ; i++){
                ans.push_back(arr[top][i]);
            }
            top++;
            for(int i = top ; i <= bottom; i++){
                ans.push_back(arr[i][right]);
                
            }
            right--;
            if(top <= bottom){
                for(int i = right ; i >= left; i--){
                    ans.push_back(arr[bottom][i]);
                    
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top ; i--){
                    ans.push_back(arr[i][left]);
                }
                left++;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
