#include <iostream>
#include <queue>
using namespace std;
struct node
{
  int data;
  node *left;
  node *right;

public:
  node(int val)
  {
    data = val;
    left = nullptr;
    right = nullptr;
  }
};
node *buildnode(node *val)
{
  int data;
  // cout<<"enter the data";
  cin >> data;
  val = new node(data);
  if (data == -1)
    return nullptr;
  cout << "enter the data of the left node of " << data << " ";
  val->left = buildnode(val->left);
  cout << "enter the data of the right node of" << data << " ";
  val->right = buildnode(val->right);
}
void bfs(node *root)
{
  queue<node *> q;
  q.push(root);
  while (!q.empty())
  {
    node *temp = q.front();
    cout << temp->data;
    q.pop();
    if (temp->left)
      q.push(temp->left);
    if (temp->right)
      q.push(temp->right);
  }
}
int main()
{
  node *root = nullptr;
  root = buildnode(root);
  bfs(root);
  return 0;
}