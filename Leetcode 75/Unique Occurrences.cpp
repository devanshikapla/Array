class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0; i < n; i++){
            mpp[arr[i]]++;

        }
        set<int>s;
        for(auto i:mpp){
            s.insert(i.second);

        }
        if(s.size() ==  mpp.size()) return true;
        return false;
    }
};
