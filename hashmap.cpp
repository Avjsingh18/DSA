#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[array[i]]++;
    }
    cout << mpp[2];
    return 0;
}