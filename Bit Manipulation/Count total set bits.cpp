int countBits(int n){
    int cnt = 0;
    while(n > 0){
        cnt += n & 1;
        n = n >> 1;
    }
    return cnt;
}
int countSetBits(int n)
{
    int cnt = 0;
    for(int i = 0 ; i <= n; i++){
        cnt  += countBits(i);
    }
    return cnt;
}
