#include <iostream>
#include <string.h>
 
using namespace std;

class Addstring{
	
	public:
		char *p;
	    int len;
		Addstring(){
			p=0;len=0;
		}
		Addstring(const char * s){
			len=strlen(s);
			p=new char[len+1];
			strcpy(p,s);
		}
		friend Addstring operator + (Addstring &x,Addstring &y);
		string display(){
			return p;
		}
		friend int operator <= (Addstring & s1,Addstring & s2);
};
Addstring operator + (Addstring &x,Addstring &y){
	Addstring s3;
	s3.len=x.len+y.len;
	s3.p=new char[s3.len+1];
	strcpy(s3.p,x.p);
	strcat(s3.p,y.p);
	return s3;	
}
int operator <= (Addstring & s1,Addstring & s2){
	int m=s1.len;
	int n= s2.len;
	if(m<=n){
		return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	Addstring s1("Computer"),s2("GEC"),s3;
	s3=s1+s2;
	cout<<"addition of s1 and s2 is: "<<s3.display()<<endl;
	
	if(s1<=s2){
		cout<<s1.display()<<endl;
		cout<<"smaller than: ";
		cout<<s2.display();
		cout<<"\n";
	}
	else{
		cout<<s2.display()<<endl;
		cout<<"smaller than: ";
		cout<<s1.display();
		cout<<"\n";	
	}
}
