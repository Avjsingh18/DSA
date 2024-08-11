#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partfunc(int array[], int low, int high)
{
    int pivot = array[low];
    int i = low;
    int j = high;
while (i < j) {
        while (array[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (array[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(array[i], array[j]);
    }
    swap(array[low], array[j]);
    return j;
}  
 
void quicksort(int array[], int low, int high)
{
    if (low >= high)
        return;
    int a;
    if (low < high)
        a = partfunc(array, low, high);
    quicksort(array, low, (a - 1));
    quicksort(array, (a + 1), high);
}

int main()
{
    int n;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    quicksort(array, 0, n - 1);
    cout << "the sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}