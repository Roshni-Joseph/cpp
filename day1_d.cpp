#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    if (num<0)
    {
        cout<<"invalid input";
    }
    else
    {
        int fact =1;
        int i;
        int result;
            for(i=1; fact<num; i++){
                fact = fact * i;
                if (fact==num)
                {
                    cout<<"the number is "<<i;
                }
            }
            if(fact!=num){
                cout<<"sorry,the number is not a factorial";
            }             
    }
    return 0;
}