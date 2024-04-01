#include<iostream>
#include<string>
using namespace std;
template<class t>
t GetMAx(t a, t b)
{
  if(a>b)
  {
      return a;
  }
  else 
  return b;

}
template<class p>
p GetMin(p a, p b)
{
    if(a<b)
    {
      return a;
    }
    else 
    return b;
}
int main ()
{
int i=5, j=6, k;
long l=10, m=5, n;
k=GetMAx(i,j);
n=GetMin(l,m);
cout<<k<<endl;
cout<<n<<endl;
return 0;
}