#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int array[8] = {1, 0, 2, 3, 0, 0, 0, 6};
    int count = 0;
    vector<int> temp;
    for (int i = 0; i < 8; i++)
    {
        if (array[i] != 0)
            temp.emplace_back(array[i]);
        count++;
    }
    for (int i = count; i < 8; i++)
        temp.emplace_back(0);
    cout << "The modified array is : " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << temp[i] << endl;
    }
    return 0;
}