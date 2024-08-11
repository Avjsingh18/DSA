#include <iostream>
using namespace std;
int bs(int array[], int low, int high, int k)
{
    int mid = (high + low) / 2;
    if (low>high){
        return -1;
    }
    while (low <= high)
    {
        if (array[mid] == k)
        {
            return mid;
        }
        else if (array[mid] > k)
           return bs(array, low, mid - 1, k);
          return  bs(array, mid + 1, high, k);
    }
}
int main()
{
    int k;
    cout << "enter the required number" << endl;
    cin >> k;
    int array[8] = {2, 5, 6, 7, 18, 21, 25, 31};
   cout<< bs(array, 0, 7, k);
    return 0;
} 