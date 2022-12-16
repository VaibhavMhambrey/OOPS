#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int ch=0,wo=0,li=0;
  char c;
  cout<<"Enter The Text: "<<endl;
  do
  {
    c=cin.get();
    ch++;
    if(c==' '||c=='.')
    wo++;
    if(c=='.')
    li++;
  }
  while(c!='\n');
  ch--;
  cout<<setw(20);
  cout<<setiosflags(ios::left);
  cout<<"Number of Lines";
  cout<<setw(20);
  cout<<"Number of Words";
  cout<<setw(25);
  cout<<" Number of characters"<<endl;
  cout<<setiosflags(ios::right);
  cout<<setw(5);
  cout<<li;
  cout<<setw(20);
  cout<<wo;
  cout<<setw(25);
  cout<<ch;
  return 0;
}
