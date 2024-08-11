#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, k;
    cout << "enter the required sum" << endl;
    cin >> k;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = array[i];
        int more = k - array[i];
        if (mpp.find(more) != mpp.end())
        {
            cout << more<<"  "<<k-more<<endl;
        }
        mpp[a] = i;
    }
    return 0;
}