#include<iostream>
using namespace std;
int main()
{
   int n1=10,n2=25;
   int *p1,*p2;
   p1=&n1;
   p2=&n2;
   cout<<*p1+*p2<<endl;
   cout<<"Address="<<p1;

}
