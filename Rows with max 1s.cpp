int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int cnt = 0;
	    int ans = 0;
	    int index = -1;
	    for(int i = 0 ; i < n ; i++){
	        cnt = 0;
	        for(int j = 0 ; j < m ; j++){
	            if(arr[i][j] == 1){
	                cnt++;
	            }
	        }
	        if(cnt > ans){
	            ans = cnt;
	            index = i;
	        }
	    }
	    return index;
	}
