#include<iostream>

using namespace std;

int main(){
    cout<<"enter the number : ";
    int num;
    cin>>num;
    int temp;
    int reverse=0;
    int index;
    if (num<0)
    {
        cout<<"invalid input";
    }
    else
    {
        index=num;
        while (index != 0)
        {
            temp=index%10;
            reverse=reverse*10+temp;
            index=index/10;
        }
        if (reverse==num)
        {
            cout<<"palindrome";
        }
        else
        {
            cout<<"not a palindrome";
        }
        
    }
    return 0;
}