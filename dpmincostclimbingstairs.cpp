#include <iostream>
#include <vector>
using namespace std;
int mincost(int n, vector<int> &cost,vector<int> &dp)
{
    if (n == 0)
        return cost[0];
    if (n == 1)
        return cost[1];
        if (dp[n]==-1)
    dp[n]=min(mincost(n - 1, cost,dp), mincost(n - 2, cost,dp)) + cost[n];
    return dp[n];
};
int main()
{ 
    cout << "enter the number of stairs" << endl;
    int n;
    cin >> n;
    vector<int>cost(n);
    for (int i = 0; i < n; i++)
    {
        cout << "cost" << i << endl; 
        cin >> cost[i];
    }
    vector<int> dp(n+1,-1);
    cout << mincost(n,cost,dp);
    return 0;
}
