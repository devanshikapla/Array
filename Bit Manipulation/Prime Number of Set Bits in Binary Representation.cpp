class Solution {
public:
    bool checkPrime(int n){
       
        if(n <= 1) return false;
        for(int i = 2 ; i < n ; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left ; i <= right ; i++){
            int ans = __builtin_popcount(i);
            if(checkPrime(ans) == true){
                cnt++;
            }
        }
        return cnt;
    }
};
