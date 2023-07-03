class Solution {
public:
    bool checkFreq(string &s){
        int arr[26] = {0};
        for(auto it : s){
            arr[it  - 'a']++;
            if(arr[it - 'a'] > 1) return true;
        }
        return false;
        
    }
    bool buddyStrings(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(n != m) return false;
        if(s == goal) return checkFreq(s);
        vector < int > ans;
        for(int i = 0 ; i < n ; i++){
            if(s[i] != goal[i]) ans.push_back(i);
        }
        if(ans.size() != 2) return false;
        swap(s[ans[0]] , s[ans[1]]);
        if(s == goal) return true;
        return false;
    }
};
