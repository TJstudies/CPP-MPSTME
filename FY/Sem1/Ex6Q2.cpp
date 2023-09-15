#include<iostream>
using namespace std;
int main()
{
    //declaration of variables
    int num[100],n,i;
    cout<<"enter the amount of numbers to be entered:"<<endl;
    cin>>n;

    //storing in arrays
    for(i=0;i<n;i++)
    {
        cout<<"enter the number: ";
        cin>>num[i];
    }



    //even number sorting using for loop
    cout<<"even numbers are as follows"<<endl;
    for(i=0;i<n;i++)
    {
        if(num[i]%2==0)
        {
            cout<<num[i];
            cout<<endl;

        }

    }


    //odd number sorting using for loop
    cout<<endl;
    cout<<"Odd numbers are as follows"<<endl;
    for(i=0;i<n;i++)
    {
        if(num[i]%2!=0)
        {
            cout<<num[i];
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}
