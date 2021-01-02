#include<iostream>

using namespace std;

int que[80];
int front=-1;
int rear=-1;
int n;

void insertQ(int num)
{
    if ((rear-front)==(n))
    {
        cout<<"Queue is full\n";
    }
    else if (front==-1)
    {
        front=0;
        rear=0;
        que[rear]=num;
    }
    else
    {
        rear++;
        que[rear]=num;
    }
}

void dltQ()
{
    if (rear==-1)
    {
        cout<<"Queue is empty";
    }
    else if (front==rear)
    {
        front++;
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void displayQ()
{
    for (int i = front; i < rear; i++)
    {
        cout<<que[i];
    }
}

int main(){
    cout<<"Enter the number of customer to take tickets : ";
    cin>>n;
    for (int i = 1; i <= n+2; i++)
    {
        insertQ(i);
    }
    cout<<"The tickets in system are : ""\n";
    displayQ();
    cout<<"\n";
    cout<<"Enter the number of tickets served : ""\n";
    cin>>front;
    dltQ();
    cout<<"The served tickets are : ";
    for (int i = 0; i < front-1; i++)
    {
        cout<<que[i];
    }
    cout<<"\n";
    cout<<"The unserved tickets are : ";
    cout<<que[front-1];
    displayQ();
    
    return 0;
}