#include <iostream>
#include <vector>
using namespace std;
void ds(int index, int arr[5], vector<int> &ans, int sum)
{
    if (index == 4)
    {
        ans.push_back(sum);
        return;
    }
    ds(index + 1, arr, ans, sum + arr[index]);
    ds(index + 1, arr, ans, sum);
}
int main()
{
    int arr[5] = {1, 2, 3, 4};
    vector<int> ans;
    ds(0, arr, ans, 0); 
    sort(ans.begin(),ans.end());
    for (int i=0;i<16;i++){
        cout<<ans[i]<<endl;
    }
}
