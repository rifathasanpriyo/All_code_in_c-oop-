#include<iostream>
using namespace std;
class overloading
{
       int num1;
       int num2;
public:
       void setter(int x,int y)
       {
              num1=x;
              num2=y;
       }
       void display()
       {
              cout<<num1<<"i"<<"+"<<num2<<endl;
       }
       overloading operator+(overloading m)
       {
              overloading temp;
              temp.num1=num1+m.num1;
              temp.num2=num2+m.num2;
              return temp;
       }

};
int main()
{
     overloading m1,m2,m3;
     m1.setter(10,20);
     m2.setter(5,5);
     m3=m1+m2;
     m3.display();

}
