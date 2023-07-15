//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	long long cnt = 0;
    	//brute force check all pairs;
    	for(int i = 0 ; i < n ; i++){
    	    for(int j = i + 1; j < n ; j++){
    	        if(a[i] + a[j] > 0 && i != j){
    	            cnt++;
    	        }
    	    }
    	}
    	return cnt;
    }   
};
class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	//two pointer approach
    	sort(a , a + n);
    	int i = 0;
    	int j = n - 1;
    	long long cnt = 0;
    	while(i < j){
    	    long long temp = a[i] + a[j];
    	    if(temp > 0){
    	        //since all the numbers between i  and j will satisfy this equation.
    	        cnt += j - i;
    	        j--;
    	    }
    	    else{
    	        i++;
    	    }
    	}
    	return cnt;
    }   
};
