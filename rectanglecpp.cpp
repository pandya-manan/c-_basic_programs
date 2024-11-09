#include<iostream>
using namespace std;
int main()
{
    int b,l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    int perimeter=2*(b+l);
    int area=l*b;
    cout<<"The area of the rectangle is: "<<area<<endl;
    cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;
    return 0;
}