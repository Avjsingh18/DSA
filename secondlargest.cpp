#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int largest = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }
    int second_largest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if ((array[i] > second_largest) && (array[i] < largest))
            second_largest = array[i];
    }
    cout << "largest element is " << largest << endl;
    cout << "second largest element is " << second_largest;
    return 0; 
} // this command will find the second largest element in the array
// also this will  find  the largest element in the array