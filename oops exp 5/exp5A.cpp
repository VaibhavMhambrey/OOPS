#include<iostream>
using namespace std;

class base
{
	public:
		int a;
		void geta(int x){
			a=x;
		}
		void displaya(){
			cout<<"A: "<<a<<endl;
		}
};

class d1 : public base
{
	int b;
	public:
		d1(int y){
			b=y;
		}
		void displayb(){
			cout<<"B: "<<b<<endl;
		}
};

class d2 : public base
{
	int c;
	public:
		d2(int z){
			c=z;
		}
		void displayc(){
			cout<<"C: "<<c<<endl;
		}
};

int main(){
	d1 ob1(5);
	ob1.geta(10);
	ob1.displaya();
	ob1.displayb();
	d2 ob2(15);
	ob2.geta(50);
	ob2.displaya();
	ob2.displayc();
	return 0;
}




