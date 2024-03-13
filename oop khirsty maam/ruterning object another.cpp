#include<iostream>
using namespace std;
class complex
{
private:
       int real;
       int img;
public:
       void set()
       {
              cin>>real>>img;
       }
       friend complex sum(complex,complex);
       void display(complex);
};
complex sum(complex c1,complex c2)
{
       complex sum3;
       sum3.real=c1.real+c2.real;
       sum3.img=c1.img+c2.img;
       return sum3;
}
void complex::display(complex c)
{
       cout<<c.real<<"+"<<c.img<<"i"<<endl;
}
int main()
{
    complex a,b,c;
    a.set();
    b.set();
    c=sum(a,b);
    c.display(c) ;

}
