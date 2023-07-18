vector<string> winner(string arr[],int n)
    {
        
        vector < string > ans;
        map < string , int > mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }
        int maxi = INT_MIN;
        string k = "";
        for(auto it : mpp){
            if(it.second > maxi){
                maxi = it.second;
                k = it.first;
            }
        }
        ans.push_back(k);
        string j = "";
        j = j + to_string(maxi);
        ans.push_back(j);
        return ans;
    }
