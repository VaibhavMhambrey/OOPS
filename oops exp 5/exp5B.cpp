#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_number;
	public:
		void get_number(int a){
			roll_number=a;
		}
		void put_number(){
			cout<<"Roll no: "<<roll_number<<endl;
		}
};

class test : virtual public student
{
	protected:
		float part1;
		float part2;
	public:
		void get_marks(float x, float y){
			part1=x;
			part2=y;
		}
		void put_marks(){
			cout<<"Marks obtained: "<<endl;
			cout<<"Part 1: "<<part1<<endl;
			cout<<"Part 2: "<<part2<<endl;
		}		
};

class sports : public virtual student
{
	protected:
		float score;
	public:
		void get_score(float s){
			score=s;
		}	
		void put_score(){
			cout<<"Sports: "<<score<<endl;
		}
};

class result : public test, public sports
{
	float total;
	public:
		void display(){
			total = part1+part2+score;
			put_number();
			put_marks();
			put_score();
			cout<<"Total score: "<<total<<endl;
		}	
};

int main()
{
	result student;
	student.get_number(60);
	student.get_marks(70.5, 82.5);
	student.get_score(9.0);
	student.display();
	return 0;
}
