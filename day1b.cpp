#include <iostream>

using namespace std;

int main()
{
  int side1,side2,side3;
  cout<<"Enter the value for side 1: ";
  cin>>side1;
  cout<<"Enter the value for side 2: ";
  cin>>side2;
  cout<<"Enter the value for side 3: ";
  cin>>side3;
  
  if(side1 != 0 && side2 != 0 && side3 != 0){
    cout<<"Sides form a triangle";
  }
  else{
    cout<<"Sides does not form a triangle";
  }

  return 0;
}