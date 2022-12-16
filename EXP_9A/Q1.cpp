#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"Enter The Values Of a,b\n";
  cin>>a;
  cin>>b;
  int x=a-b;
  try
  {
    if(b!=0)
    {
      cout<<"Result(a/x) = "<<a/x<<"\n";
    }
    else // There is an exception
    {
      throw(x); // Throws int object
    }
  }
  catch(int i) // Catches the exception
  {
    cout<<"Exception Caught: DIVIDE BY ZERO\n";
  }
return 0;
}
