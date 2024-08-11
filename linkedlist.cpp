#include <iostream>
using namespace std;
void insertnode()
{
}
int main()
{
  struct node
  {
  public:
    int data;
    node *next;

  public:
    node(int data1, node *next1)
    {
      data = data1;
      next = next1;
    }
  };
  node *fourth = new node(4, nullptr);
  node *third = new node(3, fourth);
  node *second = new node(2, third);
  node *first = new node(1, second);
  node *head = new node(0, first);
  node *temp = head;
  for (int i = 0; i < 2; i++)
  {
    temp = temp->next;
  }
  node *del = temp->next;
  node *y = del->next;
  temp->next = y;
  delete del;
  node *jemp = head;
  while (jemp != nullptr)
  {
    cout << jemp->data << endl;
    jemp = jemp->next;
  }
  return 0;
}