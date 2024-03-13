#include<iostream>
using namespace std;
class student
{
public:
       const int admission;
       student(int x)
       :admission(x)
       {

              cout<<admission;
       }
};
int main()
{
       student ob(10983);


}
