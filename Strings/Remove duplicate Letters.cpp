class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        /* Asked by Google */
        /* 
        Intution and Approach
        s = 'bcabc' on deleting last b and c the answer comes out to be bca 
        but on deleting b and c in first the answer comes out to be abc and abc is smaller than bca hence lexiographically smaller.
        result = ""

        take an array of 26 size maintain a frequency array. 

        index of a = 'a' - 'a' = 0;
        index of b = 'b' - 'a' = 1 and so on.


        if b comes then i will mark true the same letter in the frequency array. 
        intitally mark everyone as false;

        Make another array of 26 size and store the indexes of last index where the alphabet occurs. (Last index);
        like b occurs 2 times in the array so we will store the latest index that is 3 in the array
        and c pe 4 likhna h
        If an character doesnt occur then i can't pop it from resulting string.
           TC : O(n)
           SC: O(1)
        */

        int n = s.length();

        string result ;

        vector < bool > take(26 , false);
        vector < int > lastIndex(26);

        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            lastIndex[ch - 'a'] = i;
        }

        for(int i = 0 ; i < n ; i++){
            char ch = s[i];
            int index = ch - 'a';
            if(take[index] == true){
                continue;
            }
            while(result.length() > 0 && result.back() > ch && lastIndex[result.back() - 'a'] > i){
                take[result.back() - 'a'] = false;
                result.pop_back();
            }
            result.push_back(ch);
            take[index] = true;
        }
        return result;

    }
};
