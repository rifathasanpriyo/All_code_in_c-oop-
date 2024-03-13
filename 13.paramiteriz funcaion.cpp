#include<iostream>
using namespace std;
class student
{
public:
       int id;
       float gpa;
       void sett(int x,float y)
       {
              id=x;
              gpa=y;
       }
       void display()
       {
           cout<<id<<endl<<gpa<<endl;
       }

};
int main()
{
  student rifat,eyamin;

  rifat.sett(610,5.4);
    rifat.display();

}
