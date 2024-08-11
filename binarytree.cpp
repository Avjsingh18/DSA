#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*right;
    struct node*left;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int main(){
struct node* root=new node(1);
struct node * root1=new node(2);
return 0; 
}