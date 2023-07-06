class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        if(n == 1) return "1";
        string countandSay = lookandsay(n - 1);
        string result = "";
        for(int i = 0 ; i < countandSay.length() ; i++){
            int cnt = 1;
            char ch = countandSay[i];
            while(i < countandSay.length() - 1 && countandSay[i] == countandSay[ i + 1]){
                cnt++;
                i++;
            }
            result += to_string(cnt) + string(1 , countandSay[i]);

        }
        return result;
    }   
};
