#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"enter the string   \n";
    string xyz;
    getline(cin,xyz);
    int len;
    string space;
    len=xyz.length();
    int k=0;
    int i=0;
    for (int i = 0; i < len; i++)
    {
        if (xyz[i] == ' ' || i==len-1 )
        {
            for (k = i-1; (k != -1) && (xyz[k] != ' '); --k)
            {
            cout<<xyz[k];
            }
            cout<<" ";
        }
    }
    return 0;
}
