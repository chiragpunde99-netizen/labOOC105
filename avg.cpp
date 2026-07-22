#include <iostream>
using namespace std;
int main ()
{
    int num1,num2,sum,avg;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum=num1+num2;
    avg=sum/2;
    cout<<"Average of "<<num1<<" and "<<num2<<" is: "<<avg;
    return 0;
}