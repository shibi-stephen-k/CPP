#include<iostream>
using namespace std;
//The number should be equal to the addition of the cubes of each digit present in the number.
// Example - 153 - 1*1*1=1,5*5*5=125,3*3*3=27  1+125+27=153 
int main(){
    int n;
    cin>>n;
    int check=n;
    int ams=0;
    while(n>0){
        int lst= n%10;
        ams= ams + lst*lst*lst;
        n=n/10;
    }
    if(ams==check){
        cout<<"The number is an amstrong number";
    }
    else{
        cout<<"The number is not an amstrong number";
    }
    return 0;
}