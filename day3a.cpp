#include <iostream>

using namespace std;

int main(){
    int mark[6];
    cout<<"enter the marks  \n";
    int result=1;
    for (int i = 0; i < 6; i++)
    {
        cin>>mark[i];
        if (mark[i]<0)
        {
            cout<<"invalid input";
            result=1;
            break;
        }
    }
    if (result != 1)
    {
        int max=mark[0];
        for (int i = 1; i<6; i++)
            {
            if (mark[i]>max)
            {
                max=mark[i];
            }
        }
        cout<<"Highest mark is "<<max;
    }
    return 0;
}