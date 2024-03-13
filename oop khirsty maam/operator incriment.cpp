#include<iostream>
using namespace std;
class mark
{
      int num;
      public:
       mark()
       {
              num=10;
       }
       void operator++()
       {
              num=num+1;
       }
       void display()
       {
              cout<<num;
       }
};
int main()
{
     mark a;
     ++a;
     a.display();

}
