#include<iostream>
#include<vector>
using namespace std;
int fib(int n){
  vector<int> dp(n+1,-1) ;
  if (n==1)
  return 0;
   if (n==2)
  return 1;
   if (dp[n]==-1)
  dp[n] = fib(n-1)+fib(n-2);
  return dp[n];
}
int main(){
  //print a fibonachi series
  cout<<"enter the number of elements of the fibonacci series"<<endl;
  int n;
  cin>>n;
  cout<<"required fibonacci series is " ;
  for(int i=1;i<=n;i++){
  cout<<fib(i)<<"  ";
  }
  return 0;
}