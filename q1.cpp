#include<iostream>
#include<string>
using namespace std;
template<class t>
t surprise(t x, t y)
{
 return x+y;
}
int main()
{
cout<<surprise(5,7)<<endl;
string str1="sunny";
string str2="day";
cout<<surprise(str1,str2)<<endl;



    return 0;
}