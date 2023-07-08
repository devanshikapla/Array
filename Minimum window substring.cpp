
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)

    {
        unordered_map<char, int> mp;

        for(int i = 0; i < p.length(); i++){

            mp[p[i]]++;

        }
        int count = mp.size(), i = 0, j = 0, rs = 0, ans = INT_MAX;
        while(j < s.size()){

            mp[s[j]]--;
            if(mp[s[j]] == 0){

                count--;

            }
            if(count == 0){
               while(count == 0){
                    if(ans > j-i+1){

                        ans = j-i+1;

                        rs = i;

                    }

                    

                    mp[s[i]]++;

                    if(mp[s[i]] > 0){

                        count++;

                    }

                    i++;

                }

            }

            j++;

        }

        if(ans == INT_MAX) return "-1";

        

        return s.substr(rs, ans);

    }
};
