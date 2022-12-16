#include<iostream>
using namespace std;
template<class T>
void swaping(T &x,T &y)
{
  T temp=x;
  x=y;
  y=temp;
}
void fun(int m,int n,float a,float b)
{
  cout<<"m and n before swaping: "<<m<<" "<<n<<"\n";
  swap(m,n);
  cout<<"m and n after swaping: "<<m<<" "<<n<<"\n";
  cout<<"a and b before swaping: "<<a<<" "<<b<<"\n";
  swap(a,b);
  cout<<"a and b after swaping: "<<a<<" "<<b<<"\n";
}
int main()
{
fun(25,50,85.49,15.60);
return 0;
}
