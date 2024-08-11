#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec[3];
    vec[0]=1;
    vec[1]=2;
    vec[2]=3;
    for (auto it : vec)
    {
        cout << it << end;
    }
    return 0;
}