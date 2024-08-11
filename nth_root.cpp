#include <iostream>
using namespace std;
int powerfn(int mid, int power)
{
    int a = mid;
    for (int i = power; i >= 2; i--)
    {
        a = mid * a;
    }
    return a;
}
int main()
{
    int n, power, answer;
    cout << "enter the rquired number" << endl;
    cin >> n;
    cout << "enter the required power" << endl;
    cin >> power;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (powerfn(mid, power) == n)
        {
            answer = mid;
            break;
        }
        else if (powerfn(mid, power) < n)
        {
            answer = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << "the required nth root is " << answer;
    return 0;
}