#include<iostream>
#include<string>
using namespace std;

class String{  //���������������� 
	protected:
		string name;
	public:
		String(string n="String"){
			name=n;
		} 
		void show(){
			cout<<"���������"<<endl;
			cout<<name<<endl; 
			cout<<"-------------------"<<endl;
		}
};

class Violin:public	String{  //С������ 
	private:
		string Vname;
	public:
		Violin(string n="Violin"){
			Vname=n;
		} 
		void show(){
			cout<<"���������"<<endl;
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