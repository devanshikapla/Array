class Solution {
public:
    bool isPalindrome(int x) {
        vector < int > digit;
        if(x < 0) return false;
        int temp = x;
        while(temp != 0){
            int dig = temp % 10;
            digit.push_back(dig);
            temp = temp / 10;
        }
        int i = 0;
        int j = digit.size() - 1;
        bool flag = false;
        while(i < j){
            if(digit[i] != digit[j]){
                i++;
                j--;
                flag = true;
            }
            else{
                i++;
                j--;
            }
        }
        if(flag) return false;
        return true;
    }
};
