#include <iostream>
using namespace std;
int main(){
    int n,table=1,i;
    cout<<"table ? = ";    
    cin>>n;  
    for(i=1;i<=10;i++){    
      table = n * i;
      cout << n << " * " << i << " = " << table << endl;
      }
      return 0;
}