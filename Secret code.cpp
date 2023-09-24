int secretCode(int n, vector<int> &a) {
    // Write your code here.
    if(n < 3) return 0;
    for(int i = 0 ; i < n - 2 ; i++){
        if ((a[i] + a[i + 1] + a[i + 2]) % 10 == 0) {
            return 1;
        }
    }
    return 0;
}
