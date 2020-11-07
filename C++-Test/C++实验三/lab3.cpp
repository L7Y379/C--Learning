#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class Person                //��Person
{
	protected:
     char *name;
     int age;
     char gender;            //�Ա���'l'��ʾ�У�'k'��ʾŮ 
     static int counter;     // ͳ��������
	public:
 		Person(){           //���캯��
			name=new char;
			name[0]='\0';
			age=0;
			gender='\0';
			counter+=1;
		}
		Person(char* na, int ag , char ge){//ͨ��������ʼ����Ա
     		name=na;
			age=ag;
			gender=ge;
			counter+=1;	
        }
        virtual void set(char* na, int ag, char ge){    //������Ա������Ϣ
     		name=na;
			age=ag;
			gender=ge;
        } 
        virtual void show(){      //��ʾ��Ա������Ϣ
     		cout<<"��Ա������ϢΪ��"<<endl; 
	 		cout<<"������"<<name<<endl;
	 		cout<<"���䣺"<<age<<endl;
	 		cout<<"�Ա�"<<gender<<endl;
	 		cout<<"\n"<<endl; 
        }            
         int get_counter();//��ȡ��Ա����
		~Person(){} 
};

int Person::counter=0;
int Person::get_counter(){        //���ؾ�̬���ݳ�Աcounter;
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
	 	void set(char* na, int ag, char ge,int w,char *ti){       //������ʦ������Ϣ
     		name=na;
			age=ag;
			gender=ge;
			wn=w;
			title=ti; 
        } 
		void show(){
			cout<<"����ʦ������ϢΪ��"<<endl; 
	 		cout<<"������"<<name<<endl;
	 		cout<<"���䣺"<<age<<endl;
	 		cout<<"�Ա�"<<gender<<endl;
	 		cout<<"���ţ�"<<wn<<endl;
	 		cout<<"ְ�ƣ�"<<title<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//��ȡ��Ա����		
};
int Teacher::get_counter(){        //���ؾ�̬���ݳ�Աcounter;
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
		void set(char* na, int ag, char ge,int s,char *ti){       //������ʦ������Ϣ
     		name=na;
			age=ag;
			gender=ge;
			sn=s;
			tie=ti; 
        }
		void show(){
			cout<<"�ñ�����������ϢΪ��"<<endl; 
	 		cout<<"������"<<name<<endl;
	 		cout<<"���䣺"<<age<<endl;
	 		cout<<"�Ա�"<<gender<<endl;
	 		cout<<"ѧ�ţ�"<<sn<<endl;
	 		cout<<"ϵ��"<<tie<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//��ȡ��Ա����
};
int Undergraduate::get_counter(){        //���ؾ�̬���ݳ�Աcounter;
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
		void set(char* na, int ag, char ge,int s,char *ti,char *tu){       //������ʦ������Ϣ
     		name=na;
			age=ag;
			gender=ge;
			sn=s;
			tie=ti; 
			tutor=tu;
        }
		void show(){
			cout<<"���о���������ϢΪ��"<<endl; 
	 		cout<<"������"<<name<<endl;
	 		cout<<"���䣺"<<age<<endl;
	 		cout<<"�Ա�"<<gender<<endl;
	 		cout<<"ѧ�ţ�"<<sn<<endl;
	 		cout<<"ϵ��"<<tie<<endl;
	 		cout<<"��ʦ��"<<tutor<<endl;
	 		cout<<"\n"<<endl; 
		}
		int get_counter();//��ȡ��Ա����
};
int Postgraduate::get_counter(){        //���ؾ�̬���ݳ�Աcounter;
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
    
    cout<<"��Ա����Ϊ��"<<endl;
    cout<<s1->get_counter()<<endl;
	return 0; 
}