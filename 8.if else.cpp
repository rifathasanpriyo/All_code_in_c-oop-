
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
     int n1,n2,n3;
       cin>>n1>>n2>>n3;
       if(n1>n2&&n1>n3)
       {
              cout<<"big="<<n1;
       }
       else if(n1<n2&&n2>n3)
       {
              cout<<"big="<<n2;
       }
       else{
              cout<<"big="<<n3;
       }
       getch();
}
