#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,a;
    int count=0;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    vector<int> vec;
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = n; i >= 0; i--)
    {
        a=array[i];
        if (a<array[i-1]){
            a=array[i-1];
            vec.emplace_back(array[i-1]);
            count++;
        }
    }
    cout<<"the leader elements are "<<endl;
    for(int i=0;i<count;i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}