#include<iostream>
using namespace std;  
int main()
{
  char option;
  int a,b;
  cout<<"Enter first number = ";
  cin>>a;
  cout<<"Enter second number = ";
  cin>>b;
  cout<<"Please select operation from below mentioned options:"<<endl;
  cout<<"For Addition '+' "<<endl;
  cout<<"For Subtract '-' "<<endl;
  cout<<"For Devide '/' "<<endl;
  cout<<"For Multiplication '*' "<<endl;
  cout<<"Enter your option = ";
  cin>>option;
  if(option == '+')
  {
    cout<<"Addition is = "<<a+b;
  }    
  else if(option == '-')
  {
    cout<<"Substraction is = "<<a-b;
  }   
  else if(option == '*')
  {
    cout<<"Multiplication is = "<<a*b;
  }
  else if(option == '/')
  {
   cout<<"Division  is = "<<a/b;
  } 
  else
  {
   cout<<"Invalid Choice";
  }
  return 0;
}