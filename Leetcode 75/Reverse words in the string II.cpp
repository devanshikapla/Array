class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack < string > st;
        string ans = "";
        for(int i = 0 ; i < n ; i++){
            string intermediateWord;
            if(s[i] == ' ') continue; // skip spaces;
            while(i < s.size() && s[i] != ' '){
                intermediateWord = intermediateWord + s[i]; // storing the continous letters into a string;
                i++;

            }

            st.push(intermediateWord);
        }
        while(!st.empty()){
            
            ans = ans + st.top();
            st.pop();
            if(!st.empty() ) ans = ans + " ";

        }
        return ans;
    }
};
