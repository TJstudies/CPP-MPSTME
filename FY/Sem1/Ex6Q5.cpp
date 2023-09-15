/* write a program to enter the number of*/
#include<iostream>
using namespace std;
int main()
{

    int a[10][10],m,n,i,j;
    //m is the number of rows
    //n is the number of columns
    //i and j are for loops and array a is for 2d array

    //input taken below for number of rows and columns
    cout<<"Enter the number of rows you want: "<<endl;
    cin>>m;
    cout<<"Enter the number of columns you want: "<<endl;
    cin>>n;

    //entering the numbers into the 2d array now
    for(i=0;i<m;i++)
    {
        //for loop for the first index i = m ^^^

        for(j=0;j<n;j++)
        {
            //for loop for the second index j = n ^^^

            cout<<i<<j<<"]  ";
            //the above line will print the index for the stored value amount
            cin>>a[i][j];
            //inputting from user into the 2d array
            cout<<endl;
        }
        cout<<endl;
    }

    //outputting the 2d array onto the screen
        for(i=0;i<m;i++)
    {
        //for loop for the first index i = m ^^^

        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
