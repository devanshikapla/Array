class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector < string > ans;
        int n = words.size();
        //running a for loop through words and accessing the string one by one
        for(auto it : words){
            string str;
            //this second loop iterates through the it 
            int n = it.length();
            for(int i = 0 ; i < n ; i++){
                if(it[i] == separator){
                    ans.push_back(str);
                    str ="";
                }
                else{
                    str.push_back(it[i]);
                }
            }
            ans.push_back(str);
        }
        vector < string > res ; 
        for(int i = 0 ; i < ans.size() ; i++){
            if(ans[i] != ""){
                res.push_back(ans[i]);
            }
        }
        return res;
    }
};
