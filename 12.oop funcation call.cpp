#include<iostream>
using namespace std;
class student
{
public:
       int id;
       float gpa;
       void display()
       {
              cout<<id<<endl<<gpa<<endl<<endl;
       }

};
int main()
{
       student rifat,eyamin;
       rifat.id=610;
       rifat.gpa=4.94;
       rifat.display();

       eyamin.id=420;
       eyamin.gpa=9.5;
       eyamin.display();



}
