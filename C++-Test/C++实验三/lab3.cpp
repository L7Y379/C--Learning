#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class Person                //类Person
{
	protected:
     char *name;
     int age;
     char gender;            //性别，用'l'表示男，'k'表示女 
     static int counter;     // 统计总人数
	public:
 		Person(){           //构造函数
			name=new char;
			name[0]='\0';
			age=0;
			gender='\0';
			counter+=1;
		}
		Person(char* na, int ag , char ge){//通过参数初始化成员
     		name=na;
			age=ag;
			gender=ge;
			counter+=1;	
        }
        virtual void set(char* na, int ag, char ge){    //设置人员基本信息
     		name=na;
			age=ag;
			gender=ge;
        } 
        virtual void show(){      //显示人员基本信息
     		cout<<"人员基本信息为："<<endl; 
	 		cout<<"姓名："<<name<<endl;
	 		cout<<"年龄："<<age<<endl;
	 		cout<<"性别："<<gender<<endl;
	 		cout<<"\n"<<endl; 
        }            
         int get_counter();//获取人员总数
		~Person(){} 
};

int Person::counter=0;
int Person::get_counter(){        //返回静态数据成员counter;
	return counter;
}
class Teacher:public Person	{
	private:
		int wn;
		char *title;
	public:
		//Teacher(char *a="",int b=0,char c='\0',int d=0,char *e=""):Person(a,b,c),wn(d),title(e){}
		Teacher(char *a,int b,char c,int d,char *e):Person(a,b,c),wn(d),title(e){}
		~Teacher(){}
	 	void set(char* na, int ag, char ge,int w,char *ti){       //设置老师基本信息
     		name=na;
			age=ag;
			gender=ge;
			wn=w;
			title=ti; 
        } 
		void show(){
			cout<<"该老师基本信息为："<<endl; 
	 		cout<<"姓名："<<name<<endl;
	 		cout<<"年龄："<<age<<endl;
	 		cout<<"性别："<<gender<<endl;
	 		cout<<"工号："<<wn<<endl;
	 		cout<<"职称："<<title<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//获取人员总数		
};
int Teacher::get_counter(){        //返回静态数据成员counter;
	return counter;
}

class Undergraduate:protected Person {
	private:
		int sn;
		char *tie;
	public:
		//Teacher(char *a="",int b=0,char c='\0',int d=0,char *e=""):Person(a,b,c),wn(d),title(e){}
		Undergraduate(char *a,int b,char c,int d,char *e):Person(a,b,c),sn(d),tie(e){}
		~Undergraduate(){}
		void set(char* na, int ag, char ge,int s,char *ti){       //设置老师基本信息
     		name=na;
			age=ag;
			gender=ge;
			sn=s;
			tie=ti; 
        }
		void show(){
			cout<<"该本科生基本信息为："<<endl; 
	 		cout<<"姓名："<<name<<endl;
	 		cout<<"年龄："<<age<<endl;
	 		cout<<"性别："<<gender<<endl;
	 		cout<<"学号："<<sn<<endl;
	 		cout<<"系别："<<tie<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//获取人员总数
};
int Undergraduate::get_counter(){        //返回静态数据成员counter;
	return counter;
}

class Postgraduate:private Person	{
	private:
		int sn;
		char *tie;
		char *tutor;
	public:
		//Teacher(char *a="",int b=0,char c='\0',int d=0,char *e=""):Person(a,b,c),wn(d),title(e){}
		Postgraduate(char *a,int b,char c,int d,char *e,char *f):Person(a,b,c),sn(d),tie(e),tutor(f){}
		~Postgraduate(){}
		void set(char* na, int ag, char ge,int s,char *ti,char *tu){       //设置老师基本信息
     		name=na;
			age=ag;
			gender=ge;
			sn=s;
			tie=ti; 
			tutor=tu;
        }
		void show(){
			cout<<"该研究生基本信息为："<<endl; 
	 		cout<<"姓名："<<name<<endl;
	 		cout<<"年龄："<<age<<endl;
	 		cout<<"性别："<<gender<<endl;
	 		cout<<"学号："<<sn<<endl;
	 		cout<<"系别："<<tie<<endl;
	 		cout<<"导师："<<tutor<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//获取人员总数
};
int Postgraduate::get_counter(){        //返回静态数据成员counter;
	return counter;
}


int main(){
	Person S("danyi",20,'l');
	S.show();
	S.set("dy",21,'k');
	S.show();
	
    Teacher t("yangnan",20,'l',1,"teather");
    t.show();
    t.set("yn",30,'k',648,"professor");
    t.show();
    
    Undergraduate u("tangjiaqi",20,'k',2016008,"ruanjian");
    u.show();
    u.set("tjj",30,'l',2016009,"jingji");
    u.show();
    
    Postgraduate p("hsj",20,'k',2016010,"ruanjian","ly");
    p.show();
    p.set("hushijie",30,'l',2016011,"jingji","luo");
    p.show();
    
	Person *s1=&t;
	s1->set("yue",20,'l');
	s1->show();
    
    cout<<"人员总数为："<<endl;
    cout<<s1->get_counter()<<endl;
	return 0; 
}