// kadane's algorithm
#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0;
    int max_sum = INT_MIN;
    int sum;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = a + array[i];
        if (max_sum < sum)
        {
            max_sum = sum;
        }
        if (sum < 0)
        {
            a = 0;
        }
        else
        {
            a = sum;
        }
    }
    cout << "the maximum sum is" << endl
         << max_sum;
    return 0;
}