#include<iostream>
#include<utility>
using namespace std;
int main(){
int array[]={5,6,6,4,4,5,4,6,15};
int hasharray[16]={0};
for (int i=0;i<=8;i++)
{
    hasharray[array[i]]++;
}
for (int i=0;i<=15;i++){
    if(hasharray[i]!=0)
    cout<< "number of "<<i<<endl<<hasharray[i]<<endl;
}
return 0;
}