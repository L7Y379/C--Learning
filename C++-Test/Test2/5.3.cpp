#include<iostream>
using namespace std;

class employee                //类employee
{
	private:
		char *name;           //雇员姓名
		int pay;               //雇员薪酬
		static int n_pay;        //静态变量n_pay，用于存放雇员总薪酬额
	public:
 		employee(){           //构造函数
			name=new char;
			name[0]='\0';
		}
		employee(char *na,int pa){   //重载构造函数
			name=na;
			pay=pa;
			n_pay+=pa;
		}
		char *getname(){
			return name;
		}
		static int getn_pay();     //静态成员函数，用于操作静态数据成员n_pay;
};

int employee::n_pay=0;
int employee::getn_pay(){        //返回静态数据成员n_pay;
	return n_pay;
}
int main(){
	employee A("Luo",50);
	employee B("Yue",60);
	employee C("LuoYue",70);   //定义三个雇员对象，薪酬分别为50、60、70；
	cout<<A.getname()<<"、"<<B.getname()<<"、"<<C.getname()<<endl; 
	cout<<"三位雇员的总薪酬为："<<A.getn_pay()<<endl;
	return 0; 
}