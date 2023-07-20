class Solution{
public:	
	
	int shortestDistance(vector<string> &str, string word1, string word2)
	{
		// Your code goes here
		int n =str.size();
        
        int diff=INT_MAX;
        
        int index1=-1, index2=-1;

        for(int i=0; i<n; i++){
          if(str[i]==word1) index1=i;
          if(str[i]==word2) index2=i;
          
          if(index1!=-1 && index2!=-1){
              diff = min(diff, abs(index1-index2));
          }

        }
        
        return diff;
	}
};
