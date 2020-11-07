#include<iostream>	
using namespace std;
class Box 
{
	public:
	   Box(int n){
   	      l=n;	
   	   }
	   ~Box(){}                     //析构函数 
	   int &L(){return l;}          //返回数据成员l的引用 
	   void change(int a){          //传值 
   		  l=a;
   	   }
	   void change(int *p){         //指针 
   		  l=*p;
   	   }
   	   void change(int &c){         //引用 
   		  l=c;
   	   }
   	   void display_S(){            //打印表面积的函数 
   	      int s=l*l*6;
   	      cout<<"边长为:"<<l<<"表面积为:"<<s<<endl; 
   	   }
   	   void display_V(){            //打印体积的函数 
   	   	  int v=l*l*l;
   	   	  cout<<"边长为:"<<l<<"体积为:"<<v<<endl;
   	   }
 	private:
 	   int l;
};

int main()
{
	int b=2;
	int c=3;
	int m=6;
	Box box(0);
	box.L()=m;        //左值赋值给l 
	box.display_S();
	box.display_V();
	cout<<"\n"<<endl;
	
	box.change(1);
	box.display_S();
	box.display_V();
	cout<<"\n"<<endl;
	
	box.change(&b);
	box.display_S();
	box.display_V();
	cout<<"\n"<<endl;
	
	box.change(&c);
	box.display_S();
	box.display_V();
	cout<<"\n"<<endl;
	return 0;
}