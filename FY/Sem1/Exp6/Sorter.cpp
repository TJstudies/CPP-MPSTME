#include<iostream>
using namespace std;
int main()
{
  int a[100],n,i,j,temp;
  cout<<"how many numbers you want in array?:";
  cin>>n;
	cout<<"Enter array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
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
	cout<<"ascending order:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
