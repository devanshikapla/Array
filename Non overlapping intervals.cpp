    int minRemoval(int n, vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end());
       
        int cnt = 0;
        int i = 0 ;
        int j = 1;
        while(j < n ){
            vector < int > CurrInterval = intervals[i];
            vector < int > nextInterval = intervals[j];
            int cs = CurrInterval[0];
            int ce = CurrInterval[1];

            int ns = nextInterval[0];
            int ne = nextInterval[1];

            if(ce <= ns) { //no overlapping
                i = j;
                j++;
            }
            else if(ce <= ne){ // overlapping
                j++;
                cnt++;
            }
            else if(ce > ne){ // overlapping 
                i = j;
                j++;
                cnt++;
            }

        }
        return cnt;
    }
