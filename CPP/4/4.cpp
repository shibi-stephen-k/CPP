#include<iostream>
using namespace std;

int findmax(int arr[]){
  int temp_max=arr[0];
  for(int i=0;i<5;i++){
      if(arr[i]>temp_max){
        temp_max=arr[i];
      }
  }
  return temp_max;
}

int findmin(int arr[]){
  int temp_min=arr[0];
  for(int i=0;i<5;i++){
      if(arr[i]<temp_min){
        temp_min=arr[i];
      }
  }
  return temp_min;
}

 int main(){
    int arr[5];
    cout<<"Enter 5 integers"<<endl;
    for(int i=0;i<5;i++){
      cin>>arr[i];
    }
    for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxval=findmax(arr);
    cout<<"Maxmimum value in array : "<<maxval<<endl;
    int minval=findmin(arr);
    cout<<"Minimum value in array : "<<minval<<endl;

    cout<<"Array before multiplying by 5: "<<endl;
    for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after multiplying by 5: "<<endl;
    for(int i=0;i<5;i++){
      cout<<arr[i]*5<<" ";
    }
 }