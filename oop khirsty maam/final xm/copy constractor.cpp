#include<iostream>
using namespace std;
class test
{
       int id;
public:
       test()
       {

       }
       test(int x)
       {
              id=x;
       }
       test(test &c)
       {
              id=c.id;
       }
       void display()
       {
              cout<<id<<endl;
       }

};
int main()
{
       test a(2323),b(a),c;

       a.display();

       b.display();
       //no copy constartor
       c=a;
       c.display();

}
