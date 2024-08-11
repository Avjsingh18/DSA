//dutch national flag algorithm
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements in array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (array[mid] == 0)
        {
            swap(array[low], array[mid]);
            low++;
            mid++;   
        }
      else  if (array[mid] == 1)
        {
            mid++;
        }
        else 
        {
            swap(array[mid], array[high]);
            high--;
            
        }
    }
    cout << "the sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
} 