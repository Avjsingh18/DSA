#include<iostream>
using namespace std;
void markrow(int array[][3],int j,int n){
    for(int k=0;k<n;k++){
       array[k][j]=-1; 
    }
}
void markcolumn(int array[][3],int i,int m){
    for(int k=0;k<m;k++){
       array[i][k]=-1; 
    }
}
int main() {
 int n,m;
 cout<<"enter the number of rows in matrix"<<endl;
 cin>>n;
  cout<<"enter the number of columns in matrix"<<endl;
 cin>>m;
 int array[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>array[i][j];
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if (array[i][j]==0)
        markrow(array,j,n);
        markcolumn(array,i,m);
    }
 }
    return 0;
}