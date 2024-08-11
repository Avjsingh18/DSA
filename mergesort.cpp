#include <iostream>
#include<vector>
using namespace std;
void merge(int array[], int low, int mid, int high)
{
    vector<int> temp;
    int a = low;
    int b = mid + 1;
    while ((a <= mid) && (b <= high))
    {
        if (array[a] < array[b])
        {
            temp.emplace_back(array[a]);
            a++;
        }
        else
        {
            temp.emplace_back(array[b]);
            b++;
        }
    }
   while (a <= mid)
    {    
        temp.emplace_back(array[a]);
        a++;
    }
    while (b <= high)
    {
        temp.emplace_back(array[b]);
        b++;
    }
   for (int i = low; i <= high; i++)
    {
        array[i] = temp[i - low];
    }
}
void mergesort(int array[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(array, low, mid);
    mergesort(array, mid + 1, high);
    merge(array, low, mid, high);
}
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
    mergesort(array, 0, n - 1);
    cout << "sorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<endl;
    }
    
    return 0;
}