#include<iostream>

using namespace std;

int main(){
    cout<<"enter the number : ";
    int base;
    int exponent;
    cin>>base;
    cout<<"enter the digit : ";
    cin>>exponent;
    int result=1;
    if (base<0 || exponent<0)
    {
        cout<<"invalid input";
    }
    else
    {
        while (exponent != 0)
        {
            result=result*base;
            --exponent;
        }
        cout<<result;
        
    }
    return 0;
}