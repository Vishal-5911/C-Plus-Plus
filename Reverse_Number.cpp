#include <iostream>
using namespace std;
int main()
{
    int rem,reverse=0,n; 
    cout << "Enter a positive integer = ";
    cin >> n;         
    while(n!=0)  
    {    
        rem=n%10;    
        reverse=(reverse*10)+rem;  
        n=n/10;
    }    
    cout<<"Reversed number is = "<<reverse;    
    return 0;
}