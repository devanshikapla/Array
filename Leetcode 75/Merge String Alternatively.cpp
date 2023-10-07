class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n = word1.size();
       int m = word2.size();

       string k = "";
       for(int i = 0; i < min(n , m) ; i++){
           k.push_back(word1[i]);
           k.push_back(word2[i]);
       }

       int i = min(n , m);
       while(i < n){
           k.push_back(word1[i]);
           i++;
       }
       int j = min(n , m);
       while(j < m){
           k.push_back(word2[j]);
           j++;

       }
       return k;
    }
};
