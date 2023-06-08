vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // Your code goes here 
        vector<pair<int,int>> ans;
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=m-1;
        while(i<n&&j>=0){
            if(a[i]+b[j]==x){
                ans.push_back({a[i],b[j]});
                i++;
                j--;
            }
            else if(a[i]+b[j]>x)j--;
            else 
            i++;
        }
        return ans;
    }
