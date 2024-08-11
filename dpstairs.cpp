#include <iostream>
#include<vector>
using namespace std;
int stairs(int n,vector<int> &dp)
{  
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (dp[n] == -1)
        dp[n] = stairs(n - 1,dp) + stairs(n - 2,dp);
        return dp[n];
}
int main()
{
    cout << "enter the required number of stairs" << endl;
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << stairs(n,dp);
}