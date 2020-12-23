#include <iostream>

using namespace std;

int main()
{
  int hour;
  cout<<"Enter the number of hours worked in a day : ";
  cin>>hour;
  int income;
  if(hour>0){
    income=hour*100*365;
    cout<<"Total income in a year : "<<income;
  }
  else{
    cout<<"Unable to calculate the earnings";
  }

  return 0;
}