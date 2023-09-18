#include <iostream>
using namespace std;
int main()
{
    int rem,reverse=0,n,m; 
    cout << "Enter a positive integer = ";
    cin >> n;  
    m = n;       
    while(n!=0)  
    {    
        rem=n%10;    
        reverse=(reverse*10)+rem;  
        n=n/10;
    }    
    cout<<"Reversed number is = "<<reverse<<endl;  
    cout<<"n is = "<<n <<endl;
    if(m==reverse)  
    {
        cout<<"Number is PALINDROME";
    }
    else
    {
        cout<<"Number is not PALINDROME";
    }
    return 0;
}