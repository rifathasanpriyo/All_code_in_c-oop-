#include<iostream>
using namespace std;
class Swap{
int num1,num2,temp;
public:
void set()
{
    cout<<"Enter 2 number"<<endl;
    cin>>num1>>num2;

}
void get()
{
       temp=num1;
       num1=num2;
       num2=temp;
       cout<<num1<<" "<<num2;
}


};
int main()
{
   Swap ob1;
   ob1.set();
   ob1.get() ;
}
