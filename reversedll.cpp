#include <iostream>
using namespace std;
int main()
{
    struct node
    {
        int data;
        node *next;

    public:
        node(int data1, node *next1)
        {
            data = data1;
            next = next1;
        }
    };
    node *head = new node(5, nullptr);
    cout << head->data;
    return 0;
}