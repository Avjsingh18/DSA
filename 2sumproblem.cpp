#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "enter the required sum" << endl;
    cin >> k;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == k)
            {
                cout<<"the required indices are"<<endl<<i<<endl<<j;
            }
        }
    }
    return 0;
}