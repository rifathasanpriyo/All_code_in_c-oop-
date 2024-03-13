#include<iostream>
using namespace std;
class number1
{
       int n1;
public:
       void set(int n)
       {
           n1=n;
       }
       int get()
       {
              return n1;
       }
       void display()
       {
              cout<<"N1= "<<n1<<endl;

       }
};
class number2
{
       int n2;
public:
       void set(int n)
       {
           n2=n;
       }
       int get()
       {
              return n2;
       }
       void display()
       {
              cout<<"N2= "<<n2<<endl;

       }
};
int main()
{
  number1 ob1;
  number2 ob2;
  ob1.set(10);
  ob2.set(20);
  cout<<"Before Swaping "<<endl;
  ob1.display();
  ob2.display();
  //------------------------------

  int temp;
  temp=ob1.get();
  ob1.set(ob2.get());
  ob2.set(temp);
  cout<<"After Swaping "<<endl;
  ob1.display();
  ob2.display();


}
