#include<iostream>
using namespace std;
void areaCircum(float *aC,float *c){
  float circum,area,r;
  cout<<"Enter the radius"<<endl;
  cin>>r;
  circum = 2*3.14*r;
  area = 3.14*r*r;
  *aC = area;
  *c = circum;
}

void areaPeri(int *aP,int *p){
  int peri,area,l,b;
  cout<<"Enter the length and breadth"<<endl;
  cin>>l>>b;
  peri = 2*(l+b);
  area =l*b;
  *aP = area;
  *p = peri;
}

 int main(){
  int choice;
  float area_cir,circum;
  int area_rec,peri;
  cout<<"1. Circle "<<endl<<"2. Rectangle "<<endl;
  cin>>choice;
  switch(choice){
    case 1: areaCircum(&area_cir,&circum);
    cout<<"Area of circle is "<<area_cir<<"Circumference of circle is "<<circum<<endl;
    break;

    case 2: areaPeri(&area_rec,&peri);
    cout<<"Area of rectangle is "<<area_rec<<"Perimeter of rectangle is "<<peri<<endl;
    break;
  }
 }
