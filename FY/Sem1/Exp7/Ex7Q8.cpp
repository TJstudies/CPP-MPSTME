#include<iostream>
using namespace std;
int length(string str)//To find length of a string
{

    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    return len;
}
bool compare(string str1,string str2)//To compare two string for equality
{
    if(str1==str2)
    {
        return true;
    }
    else
    {
        return false;
    }

}
string copy(string str1)//To Copy one string to other
{
    string str2;
    str2=str1;
    return str2;
}
string concat(string str1,string str2)//To concatenate two string
{
    return str1+str2;
}
string reverse(string str1)//To find reverse of a String
{
    int len=length(str1);
    string str2;
    for(int i=len-1;i>=0;i--)
    {
        str2=str2+str1[i];
    }
    return str2;
}
string inputer()//To input the string
{
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;
    return str;
}
int main()
{
    int choice;
    string str1,str2;
    cout<<"Enter the choice: "<<endl;
    cout<<"1. To find length of a string "<<endl;
    cout<<"2. To compare two string for equality "<<endl;
    cout<<"3. To Copy one string to other "<<endl;
    cout<<"4. To concatenate two string "<<endl;
    cout<<"5. To find reverse of a String "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        str1=inputer();
        cout<<"The length of the string is: "<<length(str1)<<endl;
        break;
        case 2:
        str1=inputer();
        str2=inputer();
        if(compare(str1,str2))
        cout<<"The strings are equal"<<endl;
        else
        cout<<"The strings are not equal"<<endl;
        break;
        case 3:
        str1=inputer();
        str2=copy(str1);
        cout<<"The copied string is: "<<str2<<endl;
        break;
        case 4:
        str1=inputer();
        str2=inputer();
        cout<<"The concatenated string is: "<<concat(str1,str2)<<endl;
        break;
        case 5:
        str1=inputer();
        cout<<"The reversed string is: "<<reverse(str1)<<endl;
        break;
        default:
        cout<<"Wrong choice"<<endl;
    }
    return 0;
}
