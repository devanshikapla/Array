 int countWords(string list[], int n)
        {
           //code here.
           unordered_map < string , int > mpp;
           for(int i = 0 ; i < n ; i++){
               mpp[list[i]]++;
           }
           int cnt = 0;
           for(auto it : mpp){
               if(it.second == 2){
                   cnt++;
               }
           }
           return cnt;
    }
