#include<iostream>
using namespace std;
class Calculator
{
    int a;
    int b;
    int result;
    string s;
public:
    Calculator()
    {

        cin>>a>>s>>b;
        if(s=="+")
        {
            result=a+b;
        }
        else if(s=="-")
        {
            result=a-b;
        }
        else if(s=="*")
        {
            result=a*b;
        }
        else if(s=="/")
        {
            result=a/b;
        }

    }
    void display()
    {
        cout<<"Lets Calculate!"<<endl;
        cout<<"Value 1:"<<a<<endl<<"Operator:"<<s<<endl<<"Value 2:"<<b<<endl
            <<"Result:"<<result<<endl;
    }

};
int main()
{
    Calculator ob;
    ob.display();
}
