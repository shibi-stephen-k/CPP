#include<iostream>
using namespace std;

void Fibonacci(int num){

int a1=0,a2=1,temp;
for(int i=1;i<=num;i++){
  cout<<a1<<" ";
  temp=a1+a2;
  a1=a2;
  a2=temp;
}
}
int main(){
  int n;
  cin>>n;
  Fibonacci(n);
}