//User function Template for C++

int sumExists(int arr[], int n, int sum){

    //code here
    int i = 0;
    int j = n - 1;
    sort(arr , arr + n);
    while(i < j){
        if(arr[i] + arr[j] == sum){
            i++;
            j--;
            return 1;
        }
        else if(arr[i] + arr[j] < sum){
            i++;
        }
        else{
            j--;
        }
    }
    
    return 0;
}
