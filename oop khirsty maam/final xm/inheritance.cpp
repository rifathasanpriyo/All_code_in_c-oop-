#include<iostream>
using namespace std;
class person
{
public:
       int age;
       string name;
       void display1()
       {
            cout<<name<<" "<<age<<endl;
       }
};
class student
{
       public:
       int id;
       void display1()
       {

              cout<<id<<endl;
       }

};
class tamp:public person,public student
{
public:
       tamp()
       {

       }
};
int main()
{
    person ob1;
    ob1.name="rifat";
    ob1.age=18;
    ob1.display1();

}
