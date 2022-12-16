#include <iostream>
using namespace std;
int main()
{
  string s ="Object",s1="",s2="";
  int l=6;
  for(int i=0;i<l;i++)
  {
    s1="";
    s2="";
    for(int j=0;j<(l-i);j++)
    {
      s1+=s[j];
    }
    for(int k=l-i-1;k>=0;k--)
    {
      s2+=s[k];
    }
    cout.width(6);
    cout.setf(ios::left,ios::adjustfield);
    if (i==l-1)
    cout.fill('*');
    cout<<s1;
    cout.fill(' ');
    cout.width(6);
    cout.setf(ios::right,ios::adjustfield);
    if (i==l-1)
    cout.fill('*');
    cout<<s2;
    cout<<endl;
  }
  for(int i=l-1;i>0;i--)
  {
    s1 = "";
    s2 = "";
    for(int j=0;j<(l-i+1);j++)
    {
      s1+=s[j];
    }
    for (int k=l-i;k>=0;k--)
    {
      s2+=s[k];
    }
    cout.width(6);
    cout.setf(ios::left,ios::adjustfield);
    cout.fill(' ');
    cout<<s1;
    cout.fill(' ');
    cout.width(6);
    cout.setf(ios::right,ios::adjustfield);
    cout<<s2;
    cout<<endl;
  }
}
