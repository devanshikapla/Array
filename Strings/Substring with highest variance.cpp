class Solution {
public:
    int largestVariance(string s) {
        vector < int > cnt( 26 , 0);
        for(char ch : s){
            cnt[ch - 'a']++;
        }
        int res = 0;
        for(char first = 'a' ; first <= 'z' ; first++){
            for(char second = 'a' ; second <= 'z' ; second++){
                if(cnt[first - 'a'] == 0 || cnt[second - 'a'] == 0){
                    continue;
                }
                int firstcnt = 0;
                int secondcnt = 0;
                bool past = false;

                for(char & ch : s){
                    if(ch == first) firstcnt++;
                    if(ch == second) secondcnt++;
                    if(secondcnt > 0){
                        res = max(res , firstcnt - secondcnt);
                    }
                    else{
                        if(past == true){
                            res = max(res, firstcnt - 1);
                        }
                    }
                    if(secondcnt > firstcnt){
                        secondcnt = 0;
                        firstcnt = 0;
                        past = true;
                    }
                }
            }
        }
        return res;
    }
};
