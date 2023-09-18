#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20], s2[20];
    cout<<"Enter first string = ";
    cin>>s1;
    cout<<"Enter second string = ";
    cin>>s2;
    cout<<"Reverse of "<<s1<<" is = "<<strrev(s1)<<endl;
    cout<<"Reverse of "<<s2<<" is = "<<strrev(s2)<<endl;
    return 0;
}