#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  cout.setf(ios::showpoint);
  cout<<setw(5)<<"n";
  cout<<setw(18)<<"Inverse_of_n";
  cout<<setw(20)<<" Sum_of_terms\n\n";
  double term,sum = 0;
  for(int n=1;n<=10; n++)
  {
    term=1.0/float(n);
    sum=sum+term;
    cout<<setw(5)<<n;
    cout<<setw(18);
    cout<<setprecision(5);
    cout<<setiosflags(ios::scientific);
    cout<<term;
    cout<<setw(15);
    cout<<resetiosflags(ios::scientific);
    cout<<sum<<endl;
}
return 0;
}
