#include<iostream>
#include<string>
using namespace std;
template<class t,class u>
u GetMAx(t a, u b ,u ab)
{
  if(a>b&&a>ab)
  {
      return a;
  }
  else if(b>a&&b>ab)
  {
  return b;
  }
  else if(ab>a&&ab>b)
  {
      return ab;
  }

}
template<class p, class w>
p GetMin(p a, w b,p l1)
{
    if(a<b&&a<l1)
    {
      return a;
    }
    else if(b<a&&b<l1)
    {
    return b;
    }
    else if(l1<a&&l1<b)
    {
        return l1;
    }
}
int main ()
{
char i='Z';
int j=6, k ,l1=4;
long l=10, m=1000,ab=9, n;
k=GetMAx(i,m ,ab);
n=GetMin(j,l , l1);
cout<<k<<endl;
cout<<n<<endl;
return 0;
}