class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int n){
        sort(A.begin() , A.end());
        sort(B.begin() , B.end());
        long long sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + abs(A[i] - B[i]);
        }
        return sum;
    }
};
