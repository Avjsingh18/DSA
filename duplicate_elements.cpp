#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int j = 1;
    int i = 0;
    int n;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    while (j < n)
    {
        if (array[i] != array[j])
        {
            count++;
            i = j;
            j++;
        }
        else
            j++;
    }

    /* for (int i = count; i < n; i++)
     {
         array[i] = 0;
     }
     cout << "the unique elements in the array is" << endl;
     for (int i = 0; i < n; i++)
     {
         cout << array[i] << endl;
     }*/
    cout << "the number of unique elements in the array is" << endl
         << count;
}