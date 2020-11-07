#include<iostream>
#include<string>
using namespace std;

class String{  //定义弦类乐器基类 
	protected:
		string name;
	public:
		String(string n="String"){
			name=n;
		} 
		void show(){
			cout<<"该乐器类别："<<endl;
			cout<<name<<endl; 
			cout<<"-------------------"<<endl;
		}
};

class Violin:public	String{  //小提琴类 
	private:
		string Vname;
	public:
		Violin(string n="Violin"){
			Vname=n;
		} 
		void show(){
			cout<<"该乐器类别："<<endl;
			cout<<name<<endl;
			cout<<Vname<<endl;
			cout<<"-------------------"<<endl; 
		}
};

int main(){
	String s;
	Violin v;
	s.show();
	v.show();	
	return 0;
}