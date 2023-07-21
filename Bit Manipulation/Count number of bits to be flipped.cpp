class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bits = start ^ goal;
        return __builtin_popcount(bits);
        
    }
};

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int bits = start ^ goal;
        int cnt = 0;
        while(bits > 0){
            if(bits & 1 == 1){
                cnt ++;
            }
            bits = bits >> 1;
        }
        return cnt;
    }
};
