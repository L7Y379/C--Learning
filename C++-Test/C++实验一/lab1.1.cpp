#include<iostream>
#include<string>	
using namespace std;
class Student 
{
	public:
	   Student(int n,float s):num(n),score(s){}
	   void change(int n,float s){num=n;score=s;}
	   void display(){cout<<num<<" "<<score<<endl;}
	   
 	private:
 	   int num;
 	   float score;
};
void fun(Student &a){
	a.change(17,7);
	a.display();
} 

int main()
{
	Student stud(101,78.5);
	stud.display();
	stud.change(101,80.5);
	stud.display();
	fun(stud);
	return 0;
}