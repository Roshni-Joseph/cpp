#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int reverse =0;
    if (num < 0)
    {
        cout<<"Number should be positive";
    }
    else
    {
        int index;
        while (num != 0)
        {
            index=num%10;
            reverse=reverse*10+index;
            num=num/10;
        } 
        cout<<"output is : " <<reverse ;


    }
    
    
    
    
    

}