#include<iostream>
#include<string>
using namespace std;

class carnivore{
	protected:
		string name;
	public:
		static int counter;
		carnivore(string n="carnivore"){
			name=n;
			counter++;
		}
		void prey(){
			cout<<name<<"preys"<<endl;
		}
		string what()const{
			return name;
		}	
};
int carnivore::counter=0;

class felid:public carnivore{
	protected:
		bool sliPupil;
	public:
		felid(string n="felid",bool s=false){
			name=n;
			sliPupil=s;
		}
};

class tiger:public felid{
	public:
		tiger(string n="tiger",bool s=false){
			name=n;
			sliPupil=s;
		}
		void roar(){
			cout<<name<<" roars"<<endl;
			cout<<"counter:"<<counter<<endl;
		}
};

int main(){
	carnivore c;
	felid f;
	tiger t;
	t.roar();
	return 0;
}