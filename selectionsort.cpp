#include <iostream>
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
using namespace std;
int main()
{
    int array[] = {4, 5, 3, 1, 8, 2};
    for (int i = 0; i < 6; i++)
    {
        int min = i;
        for (int j = i; j < 5; j++)
        {
            if (array[min] < array[j + 1])
                min = min;
            else
                min = j + 1;
            cout << min << endl;
        }
        swap(array[min], array[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
    return 0;
}