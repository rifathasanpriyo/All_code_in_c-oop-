#include<iostream>
using namespace std;
class shop
{
       int id;
       float price;
       public:
              void setdata(int a,float b)
              {
                     id=a;
                     price=b;
              }
              void getdata()
              {
                     cout<<"code of this item is "<<id<<endl;
                     cout<<"price of this item is "<<price<<endl;
              }
};
int main()
{
 int size=3;
 shop *ptr=new shop[size];
 shop *newptr=ptr;
 int i,a;
 float b;
 for(i=0;i<size;i++)
 {
        cout<<"Enter id and price "<<i+1<<endl;
        cin>>a>>b;
        ptr->setdata(a,b);
        ptr++;
 }
 for(i=0;i<size;i++)
 {
        newptr->getdata();
        newptr++;
 }

}
