#include <iostream>
using namespace std;
int main()
{
    int n;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }//in this loop we will count the number     
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            count0++;
        }
        else if (array[i] == 1)
        {   
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << count0 << count1 << count2;
    return 0;
}
