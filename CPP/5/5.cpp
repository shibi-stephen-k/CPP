#include<iostream>
using namespace std;

/*void deletekey(int *arr[], int p, int n){
  cout<<"Enter the position to be deleted: ";
  cin>>p;
  if(p>=0 && p<n){
    for(int i=pos;i<n-1;i++){
      a[i]=a[i+1];
    }
    n--;
  }
  cout<<"The array after deletion of desired key : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
*/

 int main(){
  int n, pos;
  int *arr;
  cout<<"Enter the size of the array: ";
  cin>>n;
  arr= new int[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Array elements are : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  cout<<"Enter the position to be deleted: ";
  cin>>pos;
  if(pos>=0 && pos<n){
    for(int i=pos;i<n-1;i++){
      arr[i]=arr[i+1];
    }
    n--;
  }
  cout<<"The array after deletion of desired key : ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
  return 0;
 }