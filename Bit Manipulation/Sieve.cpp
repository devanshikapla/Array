vector<int> countPrimes(int n)
{
    // Write your code here.
    vector < bool > prime(n + 1 , true);
    prime[0] = false;
    prime[1] = false;
    vector < int > ans;
    for(int i = 2; i < n ; i++){
        if(prime[i]){
            if(n % i == 0) ans.push_back(i);
            for(int j = 2 * i ; j <= n; j = j + i){
                prime[j] = false;
            }
        }

    }
    return ans;
}
