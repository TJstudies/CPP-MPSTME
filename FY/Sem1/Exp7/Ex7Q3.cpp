#include<iostream>
using namespace std;
void largest(float x,float y,float z)
{
  float maxi;
  if(y>maxi)
  {
    maxi=y;
  }
  if(z>maxi)
  {
    maxi=z;
  }
  cout<<"Largest number is:"<<maxi;
}
int main()
{
  int x,y,z,maxi;
  cout<<"Enter x,y,z:"<<endl;
  cin>>x>>y>>z;
  x=maxi;
  largest(x,y,z);
  return 0;
}
