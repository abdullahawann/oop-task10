#include<iostream>
using namespace std;
template<class t>
t performOperation(t x,t y, char op)
{
if (op=='+')
{
    cout<<"The result is :"<<x+y;
}
if(op=='-')
{
    cout<<"The result is :"<<x-y;
}
if(op=='*')
{
    cout<<"The result is :"<<x*y;
}
if(op=='/')
{
    cout<<"The result is :"<<x/y;
}
}
int main()
    {
int a,b;
char op;
cout<<"Enter first operand :";
cin>>a;
cout<<endl;
cout<<"Enter second operand :";
cin>>b;
cout<<endl;
cout<<"Enter operation :";
cin>>op;
if(op=='+'||op=='-'||op=='/'||op=='*')
{
    performOperation(a,b,op);
}
else 
{
 cout<<"Wrong operation ";
}




        return 0;
    }