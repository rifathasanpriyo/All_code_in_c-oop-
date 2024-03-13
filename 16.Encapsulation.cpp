#include<iostream>
using namespace std;
class student
{

       private:
              string name;
                public:
       int id;
void setname(string x)
{
     name=x;

}
string getname()
{
       return name;
}

};
int main()
{
     student s1;
     s1.setname("Rifat") ;
     cout<<s1.getname();
}
