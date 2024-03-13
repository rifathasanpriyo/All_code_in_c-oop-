#include<iostream>
using namespace std;
class complex
{
       int real;
       int img;
public:
       void set(int x,int y)
       {
              real=x;
              img=y;
       }
       void display()
       {
              cout<<real<<"+"<<img<<"i"<<endl;
       }
       friend class B;

};
class B
{
public:
       complex sum(complex c1,complex c2)
       {
              complex c3;
              c3.real=c1.real+c2.real;
              c3.img=c1.img+c2.img;
              return c3;
       }
};

int main()
{
       complex a,b;
       B c;
       a.set(5,6);
       b.set(8,9);
       complex e= c.sum(a,b);
       e.display();
}
