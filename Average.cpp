#include <iostream>
using namespace std;
int main()
{
    char str[40];
    int m1,m2,m3,avg;

    cout<<"enter your name = ";
    cin>>str;

    cout<<"enter marks in 3 subjects = ";
    cin>>m1>>m2>>m3;
    avg = (m1 + m2 + m3 )/3;

    cout<<"your name is = "<<str;
    cout<<endl<<"and your average marks are = "<<avg<<endl;
    return 0;
}
