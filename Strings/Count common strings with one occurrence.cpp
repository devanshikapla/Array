class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map < string , pair <int , int > > mpp;

        int cnt = 0;
        for(int i = 0 ; i < words1.size() ; i++){
            mpp[words1[i]].first++;
        }
        for(int i = 0 ; i < words2.size() ; i++){
            mpp[words2[i]].second++;
        }
        for(auto it : mpp){
            if(it.second.first == 1 && it.second.second == 1) cnt++;
        }
        return cnt;
       
    }
};
