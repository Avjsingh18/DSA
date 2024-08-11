int county(int * arr){
    int count = 0;
    for (int i = 0; i < sizeof(arr); i++){
   count++;}
   return count;
}
#include<iostream>
using namespace std;
int main(){
int arr[4]={1,2,3,4};
cout<<county(arr);
return 0;
}