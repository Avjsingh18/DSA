#include<iostream>
using namespace std;
bool searchfn(int array[], int students, int largest, int n)
{
    int countstudent = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = array[i];
        if (sum <= largest)
            sum = sum + array[i];
        else if (sum < largest)
        {
            countstudent++;
            sum = 0;
        }
        if (countstudent == students)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int n, students, answer;
    cout << "enter the number of students " << endl;
    cin >> students;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        maxsum = array[i] + maxsum;
    }
    int largest = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }
    for (int i = largest; i <= maxsum; i++)
    {
        if (searchfn(array, students, largest, n) == 1)
        {
            answer = i;
            break;
        }
    }
    cout << "the required answer is " << answer;
    return 0;
}
//this is the required function which allocates the required books to the number of different children present in the room