#include<iostream>
using namespace std;
void pow(int x,int y)
{
    //declaring loop counter
    int i;
    int m=1;
    //looping until we hit number y
    //here x is the base y is the power
    /*for(i=1;i<y;i++)
    {
        x = x*x;
    } this program is without m */

    for(i=1;i<=y;i++)
    {
        m = x*m;
    }
    cout<<"output is: "<<m ;

}
int main()
{
    //declaring variables
    int base,exponent;
    //inputting base and exponent
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Power: ";
    cin>>exponent;
    //calling function
    pow(base,exponent);

}
