 bool check(string S , int start , int end){
        // A check func for checking a string is palindrome or not;
       
        while(start < end){
            if(S[start] != S[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    }
    string longestPalin (string S) {
        // code here
        int n = S.size();
        int maxLength = 1;
        int start = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1; j < n ; j++){
                if(j - i + 1 > maxLength && check(S , i , j) ){
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
        return S.substr(start , maxLength);
    }
