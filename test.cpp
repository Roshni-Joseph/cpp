#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int index;
    index=num[0];
    cout<<index;
}




#include <iostream>

using namespace std;

void isFactorial(int n){
    int i=2;
    while (n>1)
    {
        if(n%i == 0){
            n=n/i;
        }
        else
        {
            break;
        }
        i++;
    }
    if(n>1){
        cout<<n <<"is not a factorial of any number";
    }
    else
    {
        int temp = 1;
        for (int k=1; k<n; k++)
        {
            temp=temp * k;
            if (n==temp)
            {
                cout<<"the number is "<<k;
            }
            
        }
        
    }
    
}

int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    isFactorial(a);


}