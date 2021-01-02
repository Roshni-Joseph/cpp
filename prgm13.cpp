#include<iostream>

using namespace std;

int main(){
    int array[20];
    cout<<"enter the number of elements : ";
    int num;
    cin>>num;
    cout<<"enter the numbers \n";
    for (int  i = 1; i <= num; i++)
    {
        cout<<"enter value "<<i <<": ";
        cin>>array[i];
    }
    cout<<"index :   value :   address : \n";
    int *ptr;
    ptr=&array[0];
    for (int  i = 1; i <= num; i++)
    {
        cout<<i<<" : "<<array[i]<<" : "<<ptr<<"\n";
        ptr++;
    }
    if (num>5)
    {
        cout<<"high";
    }
    else
    {
        cout<<"low";
    }
    
    

    return 0;
}