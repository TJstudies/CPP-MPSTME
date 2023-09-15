#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    //declaration of array and variables to be used
    int a[100];
    int i,n;
    //simple input output for values
    cout<<"Enter amount of numbers: ";
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    //Looping with for to sequentially output i to be used in array brackets

    for (i = 0;i<n;i++)
        {
        cin>>a[i];
        }

    //multipying with 5
    for (i = 0;i<n;i++)
        {
        a[i]=5*a[i];
        }
    cout<<"The array elements are as follows: \n";

    //output ( press enter to run )
    for (i = 0;i<n;i++)
        {
        cout<<a[i]<<endl;
        system("pause");
        }
    return 0;
}
