#include<iostream>

using namespace std;

int main(){
    cout<<"enter the 1st number : ";
    int num;
    cin>>num;
    cout<<"enter the nth number : ";
    int n;
    cin>>n;
    int numbers;
    int sum=0;
    if (num<0 || n<0)
    {
        cout<<"invalid input";
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if (i%2 == 0)
            {
                num=num*-1;
                cout<<num;
            }
            else
            {
                cout<<"+"<<num;    
            }
            sum=sum+num;
            if (i%2 == 0)
            {
                num=num*-1;
                num++;
            }
            else
            {
                num++;
            }
        }
        cout<<" = "<<sum<<"\n";
        if (sum < 0)
        {
            cout<<"negative number";
        }
        else
        {
            cout<<"positive number";
        }
        
    }
    return 0;
}