class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int Alice = 0;
        int Bob = 0;
        for(int i = 1 ; i < n; i++){
            if(colors[i - 1] == colors[i]  && colors[i] == colors[i + 1]){
                if(colors[i] == 'A'){
                    Alice++;
                }
                else{
                    Bob++;
                }
            }

        }
        if(Alice > Bob) return true;
        return false;
    }
};
