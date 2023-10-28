
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector < int > a(n) , b(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    
    int i = 0;
    int j = 0;
    int diff = 0;
    while(i < n && j < n){
        diff = diff + abs(a[i] - b[j]);
        i++;
        j++;
    }
    cout<<diff<<endl;

    return 0;
}
