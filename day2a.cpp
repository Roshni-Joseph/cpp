#include<iostream>

using namespace std;

int main(){
    cout<<"enter the salary : ";
    float salary;
    cin>>salary;
    cout<<"enter the perfomance appraisal rating : ";
    float appraisalRate;
    cin>>appraisalRate;
    if (appraisalRate>=1 && appraisalRate<=3)
    {
        salary=salary/10 + salary;
        cout<<salary;
    }
    else if(appraisalRate>=3.1 && appraisalRate<=4)
    {
        salary=salary*25/100 + salary;
        cout<<salary;
    }
    else if(appraisalRate>=4.1 && appraisalRate<=5)
    {
        salary=salary*30/100 + salary;
        cout<<salary;
    }
    else
    {
        cout<<"invalid input";
    }
    return 0;
} 