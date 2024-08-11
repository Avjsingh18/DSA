#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int count = 0;
    int counter = 0;
    int array[n];
    int ans[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            ans[2 * count] = array[i];
            count++;
        }
        if (array[i] < 0)
        {
            ans[(2 * counter) + 1] = array[i];
            counter++;
        }
    }
    cout << "required rearranged array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}