#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"enter the PAN no :";
    string pan_No;
    cin>>pan_No;
    int result=0;
    if (pan_No.length()==10)
    {
        for ( int i = 0; i < 4; i++)
        {
            if (pan_No[i] >='A' && pan_No[i] <='Z')
            {
                result++;
            }
            
        }
        if (pan_No[9] >='A' && pan_No[9] <='Z')
        {
            result++;
        }
        int temp=0;
        for ( int i = 4; i < 8; i++)
        {
            if(isdigit(pan_No[i]))
            {
                temp++;
            }
        }
        if (result==5 && temp==3)
        {
            cout<<"Valid PAN NO";
        }
        else
        {
            cout<<"Invalid PAN NO";
        }
    }
    else
    {
        cout<<"number of characters should be 10";
    }
    return 0;
}