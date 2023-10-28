#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int calcKspikes(vector < int > & arr , int k){
    int n = arr.size();
    multiset < int > st1;
    multiset < int > st2;
    
    int cnt = 0;
    
    //declare prefix and suffix array;
    vector < int > prefix(n + 1);
    vector < int > suffix(n + 1);
    for(int i = 0 ; i < n ; i++){
        prefix[i] = distance(st1.begin() , st1.lower_bound(arr[i]));
        st1.insert(arr[i]);
    }
    
    for(int i = n - 1; i >= 0; i--){
        suffix[i] = distance(st2.begin() , st2.lower_bound(arr[i]));
        st2.insert(arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(prefix[i] >= k && suffix[i] >= k){
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector < int > price(n);
    for(int i = 0 ; i < n ; i++){
        cin>>price[i];
    }
    int spikes = calcKspikes(price , k);
    cout<<spikes<<endl;
    return 0;
}
