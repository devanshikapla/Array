class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        int n = str.size();
        set < int > st;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for(int i = 0 ; i < n ; i++){
            if(isalpha(str[i]))st.insert(str[i]);
        }
        if(st.size() == 26) return 1;
        else{
            return 0;
        }
    }

};
