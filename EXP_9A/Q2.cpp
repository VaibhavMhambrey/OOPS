#include <iostream>
using namespace std;
void test(int x)
{
  try
  {
    if(x==1)
    throw x; // int
    else
    if(x==0)
    throw 'x'; // char
    else
    if(x==-1)
    throw 1.0; // double
}
catch(char c) // Catch 1
{
  cout<<"Caught a character \n\n";
}
catch(int m) // Catch 2
{
  cout<<"Caught an integer \n\n";
}
catch(double d) // Catch3
{
  cout<<"Caught a double \n";
}
}
int main()
{
cout<<"Testing Multiple Catches \n";
cout<<"x == 1 \n";
test(1);
cout<<"x == 0 \n";
test(0);
cout<<"x == -1 \n";
test(-1);
}
