#include<iostream>
using namespace std;
class A
{
    protected:
        int a,b;
    public:

        void getdata()
        {
            cout<<"Enter the first value"<<endl;
            cin>>a;
            cout<<"Enter the second value"<<endl;
            cin>>b;
        }
        void putdata()
        {
            cout<<"First value"<<a<<endl;
            cout<<"Second value"<<b<<endl;

        }
};
class B:public A
{
    int add;
    public:
        int Sum()
        {
            add = a+b;
            return add;
        }
        void result()
        {
            cout<<"result is"<<add<<endl;
        }
};
int main()
{
    B object;
    object.getdata();
    object.putdata();
    object.Sum();
    object.result();
}
