#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
           int id;
           double gpa;

};
int main()
{
    student rifat;
    rifat.id=610;
    rifat.gpa=3.53;
    cout<<"Rifat"<<endl<<"Id="<<rifat.id<<endl<<"Gpa="<<rifat.gpa;
getch();
}
