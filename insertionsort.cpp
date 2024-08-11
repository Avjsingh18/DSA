#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "enter the number of elements in the array" << endl;
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (array[j] < array[j - 1])
                swap(array[j], array[j - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}