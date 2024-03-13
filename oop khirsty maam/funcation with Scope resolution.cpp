#include<iostream>
using namespace std;
class box
{
public:
       int l,w,h;
       void print();



};
 void box::print()
 {
        int vol=l*w*h;
        cout<<vol;
 }
int main()
{
      box ob1;
      ob1.h=10;
      ob1.l=5;
      ob1.w=9;
      ob1.print();
}
