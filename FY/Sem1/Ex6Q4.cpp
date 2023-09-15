#include<iostream>
using namespace std;
int main()
{
    //Write a program to reverse the values of an array and print it.
    //declaration of variables
    int num[100],rev[100],n,j,i;
    cout<<"enter the amount of numbers to be entered:"<<endl;
    cin>>n;

    //storing in arrays
    for(i=0;i<n;i++)
    {
        cout<<"enter the number: ";
        cin>>num[i];
    }



    //reversing the values
    for(i=0;i<n;i++)
    {
        j = n-i-1;

        rev[j]=num[i];
    }



    //OUTPUTTING THE NUMBERS
    for(i=0;i<n;i++)
    {
        cout<<rev[i]<<endl;
    }

    return 0;
}
