#include<iostream>
using namespace std;
class ABC;
class xyz
{
       int n1;
public:
       xyz()
       {
              cout<<"Enter 1st Number=";
              cin>>n1;
       }
       friend void max(xyz,ABC);
};
class ABC
{
         int n2;
public:
       ABC()
       {
              cout<<"Enter 2nd Number=";
              cin>>n2;
       }
       friend void max(xyz,ABC);
};
void max(xyz m,ABC n)
{
       if(m.n1>n.n2)
       {
              cout<<"Number 1 Big"<<endl;
       }
       else
       {
            cout<<"Number 2 Big"<<endl;
       }
}
int main()
{
  xyz xxx;
  ABC aaa;
  max(xxx,aaa);

}
