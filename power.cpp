#include <iostream>
using namespace std;
long int power(int n, int i)
{
    if (i == 0)
        return 1;
    power(n,i - 1);
    return n * power(n,i - 1);
}
int main()
{
    int i, n;
    cout << "enter the  number " << endl;
    cin >> n;
    cout << "enter the required power to be raised of " << endl;
    cin >> i;
    cout << "the required answer of the power is" << endl;
    cout << power(n, i);
    return 0;
}