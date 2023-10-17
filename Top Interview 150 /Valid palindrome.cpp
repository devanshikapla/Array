class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(s[i] >= 65 && s[i] <= 90){
                char ch = tolower(s[i]);
                temp.push_back(ch);
            }
            else if(s[i] >= 97 && s[i] <= 122){
                temp.push_back(s[i]);
            }
            else if(s[i] >= 48 && s[i] <= 57){
                temp.push_back(s[i]);
            }
            else {
                continue;
            }

        }
        string st = temp;
        reverse(st.begin() , st.end());
        return st == temp;
    }
};
