#include<iostream>
using namespace std;

int *max(int *x,int *y){
  if(*x>*y){
    return x;
  }
  else{
    return y;
  }
}

 int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Address of a is "<<&a<<endl<<"Address of b is "<<&b<<endl;
    
    int *maxaddress=max(&a,&b);
    cout<<"Address of maximum number is "<<maxaddress<<endl;
 }