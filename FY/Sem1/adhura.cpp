#include<iostream>
using namespace std;

int rev(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    cout<<rev_num;
}
int sumofdigits(int x)
{
    int s
    while (x != 0)
    {
      s = s + x % 10;
      x = x / 10;
    }
    cout<<
}
