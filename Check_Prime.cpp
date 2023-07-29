#include <iostream>
using namespace std;
int main()
{
    int i,n,temp=0,rem;
    cout<<"Enter Your Number To Check PRIME = ";
    cin>>n;
    for(i=1;i<=n;i++){
        rem = n%i;
        if (rem == 0)
        temp++;
    }
    if (temp == 2)
    cout<<"Number Is PRIME";
    else
    cout<<"Number Is  Not PRIME";
        return 0;
}