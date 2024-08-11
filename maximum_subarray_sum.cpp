#include<iostream>
using namespace std;
int main(){
   int n;
   long double max_sum=INT_MIN;
    cout << "enter the number of elements in the array" << endl;
    cin >> n;
    int array[n];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for(int i=0;i<n;i++){
        int sum=array[i];
         for(int j=i+1;j<n;j++){
            sum=sum+array[j];
            if(sum>max_sum){
                max_sum=sum;
            }
         }
    }
    cout<<"the maximum sum is"<<endl<<max_sum;
return 0;
}