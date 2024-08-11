#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n, target;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter the required targeted missing number"<<endl;
    cin >> target;
    vector<int> v;
    //include the next step in the binary search itself to reduce the time complexity
   for (int i = 0; i < n; i++)
    {
        v.emplace_back(array[i] - i - 1);
    }
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid=(low+high)/2;
        if (v[mid]<target)
        low=mid+1;
        else
        high=mid-1;
    }
    int x=array[high]+target-v[high];
    cout<<"the targeted missing number is : "<<x;
    return 0;
}