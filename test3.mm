#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[89];
    cout << "enter\n";
    gets(s);
    int k;
    int p = strlen(s);
    strcat(s," ");

    for(int i=0; i <= p; i++)
    {
        if(s[i]==' ')
        {
            for (k = i-1; (k != -1) && (s[k] != ' '); k--)
                cout<<s[k];
            cout<<" ";
        }
    }
    return 0;
}
