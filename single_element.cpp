#include <iostream>
using namespace std;
int main()
{
    int n, answer;
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
        int p = mid % 2;
        if (array[mid] != array[mid - 1] && array[mid] != array[mid + 1])
        {
            answer = mid;
            break;
        }
        if (p == 1)
        {
            if (array[mid] != array[mid + 1])

                low = mid + 1; 

            else if (array[mid] != array[mid - 1])

                high = mid - 1;
        }
        if (p == 0)
        {
            if (array[mid] == array[mid + 1])
                low = mid;
            else if (array[mid] == array[mid - 1])
                high = mid;
        }
    }
    cout << "the required index is " << answer << endl;
    cout << "the required number is " << array[answer];
    return 0;
}