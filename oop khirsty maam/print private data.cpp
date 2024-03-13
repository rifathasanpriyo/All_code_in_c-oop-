#include<iostream>
using namespace std;
class box
{
       int l,w,h;
public:
void get();
void print() ;
};
 void box::get()
       {
         l=10;
         w=5;
         h=9;

       }
void box::print()
       {
              int vol=l*w*h;
         cout<<vol;
       }


int main()
{
      box ob1;

      ob1.get();
      ob1.print();
}

