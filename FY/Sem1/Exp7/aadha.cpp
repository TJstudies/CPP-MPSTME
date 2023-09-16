#include<iostream>
using namespace std;
int main()
{
       int n;
       char a;
       cout<<"Enter a number:";
       cin>>n;
       cout<<"Type r for reverse/s for sum of digits/c for count"<<endl;
       cin>>a;
       switch(a)
       {
       case r:
              rev(n);
       case s:
              sumofdigits(n);
       case c:
              cunt(n);
       }
       return 0;
}
