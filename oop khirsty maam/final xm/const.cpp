#include<iostream>
using namespace std;
class cat
{
       string s1,s2;
public:
       cat()
       {
              s1="White";
              s2="sitting";
       }
       cat(string x)
       {
              s1=x;
              s2="sitting";
       }
       cat(string x,string y)
       {
              s1=x;
              s2=y;
       }
       void changeColor(string x)
       {
              s1=x;
       }
       void printCat()
    {
           cout << s1 << " cat is " << s2 << endl;
    }

};
int main()
{
      cat c1,c2("Black"),c3("Brown","Jumping"),c4("Red","purring");
      c1.printCat();
c2.printCat();
c3.printCat();
c4.printCat();

c1.changeColor("Blue");
c3.changeColor("Purple");
c1.printCat();
c3.printCat();
}
