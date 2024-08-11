// moores's voting algorithm
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    int counter = 0;
    int a;
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
        a = array[i];

        if (a == array[i])

        {
            count++;
        }
        else
        {
            count--;
        }

        if (count <= 0)
            a = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == a)
        {
            counter++;
        }
    }
    if (counter > n / 2)
    {
        cout << "the required number is: " << a;
    };
    return 0;
}