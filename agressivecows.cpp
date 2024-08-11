#include <iostream>
using namespace std;
bool search_fn(int array[], int intmin, int cows, int n)
{
    int cowcount = 1;
    int a = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] - a >= intmin)
        {
            cowcount++;
            a = array[i];
        }
    }
    if (cowcount>=cows)
    return true;
    else 
    return false;
}
int main()
{
    int n, cows;
    cout << "enter the number of cows" << endl;
    cin >> cows;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // array[]={0,3,5,8,9,11}
    // sort the array before writng the code
    int intmin = 1;
    for (intmin = 1; intmin <= /*sortedarray*/array[n - 1]/*this array is the sorted array*/; intmin++)
    {
        if (search_fn(/*actualarray*/array, intmin, cows, n) == 1)
            continue;
        else
            break;
    }
    cout<<"required value is "<<intmin-1;
    return 0; 
}