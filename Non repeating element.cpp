int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i=0;i<n;i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    } 
