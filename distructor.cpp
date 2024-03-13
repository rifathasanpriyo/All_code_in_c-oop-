#include<iostream>
using namespace std;
int count=0;
class name
{
   public:
          name()
          {
                 count++;
                 cout<<"constructor working "<<count<<endl;
          }
          ~name()
          {
                 cout<<"Distructor working"<<endl;
          }
};
int main()
{
  name a,a2,a3;
  {

         cout<<"Enter Block"<<endl;
          name a4;
  }
  {

         cout<<"Enter Block 2"<<endl;
         name a5;
  }

}
