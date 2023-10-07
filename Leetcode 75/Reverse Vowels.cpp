class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'O' || ch == 'o' || ch == 'U' || ch =='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while( i < j){
            while(i!= n && j != -1 && !isVowel(s[i]) && i <= j) i++;
             while(i!=n && j!=-1 && i<=j && !isVowel(s[j])) j--;
             if(i<=j && i!=n && j!=-1 && isVowel(s[i]) == true)
            {
                swap(s[i],s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};
