#include<iostream>
#include <ostream>
#include <istream>
using namespace std;

class abc{
	int data;
	public:
		abc(){
			data=0;
		}
		abc(int a){
			data=a;
		}
		int display(){
			return data;
		}
		friend abc operator +(int op,abc y);
		friend abc operator *(abc x,abc y);
		friend abc operator -(abc y,int op);
};
 abc operator +(int op,abc y){
 	abc temp;
 	temp.data= op+ y.data;
 	return temp;
 }
abc operator *(abc x,abc y){
	abc temp;
	temp.data=x.data*y.data;
	return temp;
}
abc operator -(abc y,int op){
		abc temp;
 	temp.data= y.data-5;
 	return temp;
}
int main(){
	abc x,y(8);
	cout<<"execution of (i)x=5+y"<<endl;
	cout<<"\n";
	cout<<"data of object x before overloading is: "<<x.display()<<endl;
    x=5+y;
    cout<<"data of object x after overloading is: "<<x.display()<<endl;
    cout<<"x=5+y executed successfully"<<endl;
    cout<<"\n";
    cout<<"execution of (ii)x=x*y"<<endl;
    cout<<"\n";
    x=x*y;
    cout<<"data of object x after overloading * operator: "<<x.display()<<endl;
    cout<<"x=x*y executed successfully"<<endl;
    cout<<"\n";
    cout<<"execution of (iii)x=y-5"<<endl;
    cout<<"\n";
    x=y-5;
    cout<<"data of object x after overloading - operator: "<<x.display()<<endl;
    cout<<"x=y-5 executed successfully"<<endl;
}
