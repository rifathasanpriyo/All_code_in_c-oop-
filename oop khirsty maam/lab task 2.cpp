#include<iostream>
using namespace std;
class Panda
{
      string name,gender;
      int age;
      public:
             Panda()
             {
                 cin>>name>>gender>>age;
             }
      void display()
      {
             cout<<name<<" is a "<< gender<<" Panda Bear who is "<< age <<" years old"<<endl;
      }
      void sleep(int x)
      {
             if(x>=3 && x<=5)
             {
                    cout<<name<<" sleeps "<< x<<" hours daily and should have Mixed Veggies"<<endl;
             }
             else if(x>=6 && x<=8)
             {
                  cout<<name<<" sleeps "<< x<<" hours daily and should have Eggplant & Tofu"<<endl;
             }
              else if(x>=9 && x<=11)
             {
                  cout<<name<<" sleeps "<< x<<" hours daily and should have Broccoli Chicken"<<endl;
             }
      }
      void sleep()
      {
             cout<<name<<" duration is unknown thus should have only bamboo leaves"<<endl;
      }


};
int main(){
Panda ob,ob2,ob3;
ob.display();
ob2.display();
ob3.display();
ob2.sleep(10);
ob.sleep(4);
ob3.sleep();



}
