#include<iostream>
using namespace std;
class person
{
public:
    int age;
    string name;


};
class student:public person
{
public:
    int id;
    void display()
    {
        cout<<name<<endl<<id<<endl<<age;
    }
};
int main()
{
    student s1;
    s1.id=610;
    s1.name="Rifat";
    s1.age=22;
    s1.display();
}
