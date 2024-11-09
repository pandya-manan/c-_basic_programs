#include<iostream>
using namespace std;
int main()
{
    int principal,time;
    float rate,SI;
    cout<<"Enter the principal amount to be invested: ";
    cin>>principal;
    cout<<"Enter the time in years: ";
    cin>>time;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    SI=(principal*time*rate)/100;
    cout<<"The simple interest calculated is: "<<SI;
    return 0;
}