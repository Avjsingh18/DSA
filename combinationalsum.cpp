#include <iostream>
#include <vector>
using namespace std;
void combinationalsum(int index, vector<int> &arr, vector<int> &dp, vector<vector<int> > &ans, int target)
{
    if (index == arr.size())
    {
        if (target == 0)
            ans.push_back(dp);
        return;
    }
    if (target >= arr[index])
    {
        dp.push_back(arr[index]);
        combinationalsum(index, arr, dp, ans, target - arr[index]);
        dp.pop_back();
    }
      combinationalsum(index, arr, dp, ans, target);
}                                  
int main()
{
    int target;
    vector<int> dp;
    vector<vector<int> > ans;
    cout << "enter the target";
    cin >> target;
    vector<int> arr ={2, 4, 5, 6, 9};
    combinationalsum(0, arr, dp, ans, target);
}
//this  is called the function variable