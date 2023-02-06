#include<iostream>
using namespace std;

Linear(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
  int n;     //0 1 2 3 4   index=4 
  cin>>n;   // 1 2 3 4 5   key=5
  int key=5;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
    cout<<endl;
    cout<<Linear(arr,n,key);
  return 0;
}