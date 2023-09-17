#include<iostream>
using namespace std;
void rev(int n,int t)
{
    cout<<"Reverse of inputted number=";
    while(n!=0)
    {
        t=n%10;
       cout<<t;
       n=n/10;
    }
}
void sumofdigits(int n,int sum,int t)
{
     while(n!=0)
    {
        t=n%10;
       sum=sum+t;
       n=n/10;
    }
    cout<<"Sum of digits="<<sum;
}
void cunt(int n,int sum,int t)
{
    while(n!=0)
    {
        t=n%10;
        sum++;
       n=n/10;
    }
    cout<<"Count of digits="<<sum;
}
int main()
{
       int n,sum=0,t;
       char a;
       cout<<"Enter a number:";
       cin>>n;
       cout<<"Type r for reverse/s for sum of digits/c for count"<<endl;
       cin>>a;
       switch(a)
       {
       case 'r':
              rev(n,t);
              break;
       case 's':
              sumofdigits(n,sum,t);
              break;
       case 'c':
                cunt(n,sum,t);
                break;
       default:
        cout<<"Error";
       }
       return 0;
}
