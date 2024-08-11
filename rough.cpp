#include<vector>
int answer(int arr[],int index,int curr,vector<vector<int>> &dp){
    if(index==0){
    if(arr[0]<curr)
    return 1;
    return 0;
    }
    if(dp[index][curr]!=-1)
    return dp[index][curr];
    int pick=0;
    if (curr > arr[index]) {
    pick = 1 + answer(arr, index - 1, arr[index], dp);
    }
    int not_pick = answer(arr, index - 1, arr[index], dp);
    return dp[index][curr] = max(pick,not_pick);
}
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>> dp(n,vector<int>(100000,-1));
    return answer(arr,n-1,100000,dp);
}
