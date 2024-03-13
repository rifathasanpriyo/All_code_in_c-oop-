#include<iostream>
using namespace std;
class student
{
public:
       int id;
       float gpa;
       void display()
       {
           cout<<id<<endl<<gpa<<endl;
       }
       student(int x, float y)//constructor
       {
              id=x;
              gpa=y;
       }

};
int main()
{
  student rifat(610,5.7);

 rifat.display();

}

