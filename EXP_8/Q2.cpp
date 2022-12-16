#include<iostream>
using namespace std;
template<class T>
class vector
{
  T v[20];
  int size;
    public:
      void create();
      void modify();
      void display();
};
template<class T>
void vector<T>::create()
{
  int i;
  T value;
  char ans;
  size=0;
  do
  {
    cout<<"\nEnter The Index & Value:";
    cin>>i>>value;
    v[i]=value;
    size++;
    cout<<"\nEnter More Elements?";
    cin>>ans;
  }
  while(ans=='y'||ans=='Y');
}
template<class T>
void vector<T>::modify()
{
  int key;
  T newval;
  cout<<"\nEnter Index For Modification:";
  cin>>key;
  cout<<"\nEnter New Value:";
  cin>>newval;
  v[key]=newval;
}
template<class T>
void vector<T>::display()
{
  int i;
  cout<<"\nSize of vector is:"<<size;
  cout<<"\nElements in vector are:";
  cout<<"(";
  for(i=0;i<size;i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<")";
}
int main()
{
  int ch;
  vector<int>obj;
  cout<<"\nProgram for template class";
  do
  {
    cout<<"\n1.Create\n2.Display\n3.Modify\n4.Exit";
    cout<<"\nEnter your choice:";
    cin>>ch;
    switch(ch)
    {
      case 1:
            obj.create();
            break;
      case 2:
            obj.display();
            break;
      case 3:
            obj.modify();
            break;
      case 4:
            cout<<"\nExit\n";
            break;
      default:
            cout<<"\nInvalid choice";
            break;
    }
  }while(ch!=4);
}
