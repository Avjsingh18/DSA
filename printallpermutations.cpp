#include <iostream>
#include <vector>
vector<vector<int>> pap(int ind, int array[3], vector<vector<int>> ans, vector<int> ds)
{
    if (ind == 4)
    {
        ans.push_back(ds);
        return;
    }
    
}
using namespace std;
int main()
{
    vector<vector<int>> ans;
    vector<int> ds;
    int array[3] = {1, 2, 3};
    pap(0, array, ans, ds);
}