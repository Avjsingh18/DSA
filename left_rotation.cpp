// remember theres a better solution by using reverse methods(reversing left half,right half,and then the whole array)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k;
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << "enter the required number of rotations" << endl;
    cin >> k;
    vector<int> temp;
    k = k % 7;
    for (int i = 0; i < k; i++)
    {
        temp.emplace_back(array[i]);
    }
    for (int i = 1; i <= 7 - k; i++)
    {
        array[i - 1] = array[i + k - 1];
    }
    for (int i = 7 - k; i < 7; i++)
    {
        array[i] = temp[i - 7 + k];
    } 

    cout << "the required array is" << endl;
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i];
    }
    return 0;
}
//what is the value of  