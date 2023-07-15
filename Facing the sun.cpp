class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    // code here
	    int cnt = 1;
	    int maxi = h[0];
	    for(int i = 0 ; i < n ; i++){
	        if(h[i] > maxi){
	            cnt++;
	            maxi = h[i];
	        }
	    }
	    return cnt;
	}
};
