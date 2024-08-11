#include <iostream>
#include <map>
using namespace std;
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
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[array[i]]++;
    }
 for(auto it:mpp){
    if(it.second>n/2){
        cout<<"the majority element is"<<endl<<it.first;
        break;
    }
 }
    return 0;
}