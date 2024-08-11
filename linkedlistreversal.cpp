#include <iostream>
#include<stack>
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

    public:
        node(int data1)
        {
            data = data1;
            next = nullptr; 
        }
    };
    node *node4 = new node(4);
    node *node3 = new node(3, node4);
    node *node2 = new node(2, node3);
    node *head = new node(1, node2);
    node *current = head;
    node*back=head;  
    while (current != nullptr)
    {
      current=current->next;
      current->next=back;
      back=current;
    }
     while (current != nullptr)
    {
      cout<<head->data;
    }
}