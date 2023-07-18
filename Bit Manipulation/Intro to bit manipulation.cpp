    void bitManipulation(int num, int i) {
        // your code here
        int j = i - 1;
        int n = 1 << j;
        if(n & num){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
        cout<<(num|n)<<" ";
        n=~n;
        cout<<(num&n);
    }
};
