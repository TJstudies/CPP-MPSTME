#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j,temp;
    cout<<"Ascending Order:  "<<endl;
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
    for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}

}
int main()
{
    int n,a[100],i;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<i<<"]";
        cin>>a[i];
    }
    sort(a,n);
}
