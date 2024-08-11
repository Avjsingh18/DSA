#include <iostream>
using namespace std;
int main()
{
    int n, answer;
    cout << "enter the required number to find the sqrt " << endl;
    cin >> n;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (mid * mid == n)
        {
            answer = mid;
            break;
        }
        else if (mid * mid < n)
        {
            answer = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << "the rquired square root is " << answer;
    return 0;
}