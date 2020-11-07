#include<iostream>
#include<string>	
using namespace std;

class Employee 
{
	public:
	   Employee(string n){
	   		totalNo=totalNo+1;
	   		salary=0;
	   		name=n;
	   		No=totalNo;
	   }
	   ~Employee ();
	   virtual void  pay ( )=0;        //计算月薪
	   virtual void display( ) = 0;      //显示人员信息
 	protected:
 	   int No;
 	   string name;
 	   float salary;
 	   static int totalNo;    // 自动计算员工编号
};
int Employee::totalNo=0;

class jingli:public Employee
{	
	public:
		jingli(string n):Employee(n){}
		void  pay(){
			salary=8000;
		}
		void  display(){
			cout<<"员工身份:经理"<<endl;
			cout<<"编号:"<<No<<endl;
			cout<<"姓名:"<<name<<endl;
			cout<<"薪水:"<<salary<<endl;
		}
};

class jishu:public Employee
{	
	public:
		jishu(string n,int t):Employee(n),time(t){}
		void  pay(){
			salary=time*50;
		}
		void  display(){
			cout<<"员工身份:技术人员"<<endl;
			cout<<"编号:"<<No<<endl;
			cout<<"姓名:"<<name<<endl;
			cout<<"薪水:"<<salary<<endl;
			cout<<"工作时长:"<<time<<endl;			
		}
	private:
		int time;
		
};

class xiaoshou:public Employee
{	
	public:
		xiaoshou(string n,int x):Employee(n),xs(x){}
		void  pay(){
			salary=xs*0.03;
		}
		void  display(){
			cout<<"员工身份:销售人员"<<endl;
			cout<<"编号:"<<No<<endl;
			cout<<"姓名:"<<name<<endl;
			cout<<"薪水:"<<salary<<endl;
			cout<<"当月销售额:"<<xs<<endl;			
		}
	private:
		int xs;
};