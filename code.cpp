#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int hasharray[101]={0};
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    for (int j = 0; j <n; j++)
    {
        hasharray[array[j]]++;
    }
    for (int j = 0; j <101; j++)
    {
        if (hasharray[j] == 0)
        {
            cout << j << endl;
        }
    }
    return 0;
}