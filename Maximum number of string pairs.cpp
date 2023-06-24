class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1; j < n ; j++){
                string ans = words[i];
                reverse(ans.begin() , ans.end());
                if(ans == words[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
