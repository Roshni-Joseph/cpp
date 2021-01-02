#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    cout<<"enter the number of countries :";
    int country_num;
    cin>>country_num;
    string country_name[100];
    cout<<"enter the name of country \n";
    for (int i = 0; i < country_num; i++)
    {
        cin>>country_name[i];
    }
    int country_population[100];
    cout<<"enter the population of each country \n";
    for (int j = 0; j < country_num; j++)
    {
        cin>>country_population[j];
    }
    int temp=0;
    string temp_name;
    int m;
    int i;
    int k;
    for (int m = 0; m < country_num; m++)
    {
        for (int n = m+1; n < country_num; n++)
        {
            if (country_population[m] > country_population[n])
            {   
                swap(country_population[m] , country_population[n]);
                swap(country_name[m] , country_name[n]);
            }
            
        }
        
    }
    for (int m = 0; m < country_num; m++)
    {
        cout<<country_name[m]<<"\n";
    }
    for (int m = 0; m < country_num; m++)
    {
        cout<<country_population[m]<<"\n";
    }
    return 0;
}