#include <iostream>
using namespace std;
int main()
{
    int n, target;
    cout<<"enter the required target "<<endl;
    cin>>target;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    int answer = n;
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
      int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] > target)
        {
            answer = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
cout<<"the required answer is "<<answer<<endl;
    return 0;
}