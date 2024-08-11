#include <iostream>
using namespace std;
int main()
{
    int n, target;
    int answer = -1;
    cout << "enter the required target" << endl;
    cin >> target;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == target)
        {
            answer = mid;
            break;
        }
        if (array[low] == array[mid] && array[mid] == array[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        if (array[low] <= array[mid])
        {
            if (/*array[low] <= target && */ array[mid] >= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (/*array[mid] <= target && */ array[high] >= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (answer != -1)
        cout << "yes";
    return 0;
}
//enter the  value of the variable which is required in place of the value