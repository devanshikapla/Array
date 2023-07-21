int missingNumber(int n, vector<int> &arr){
    // Write your code here.
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cnt = cnt ^ arr[i];
    }
    return cnt;
}
