#include <iostream>
#include <vector>
using namespace std;
int mincoins(int target, vector<int> &coins)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = mincoins(target - coins[i], coins);
        if (ans != INT_MAX)
            mini = min(mini, 1 + ans);
    }
    return mini;
}
int main()
{
    cout << "enter the required target" << endl;
    int target;
    cin >> target;
    cout << "enter the number of denominations of the coins" << endl;
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cout << "coin " << i << endl;
        cin >> coins[i];
    }
    cout << mincoins(target, coins);
}