#include<iostream>	
using namespace std;
class Box 
{
	public:
	   Box(int n){
   	      l=n;	
   	   }
	   ~Box(){}                     //�������� 
	   int &L(){return l;}          //�������ݳ�Աl������ 
	   void change(int a){          //��ֵ 
   		  l=a;
   	   }
	   void change(int *p){         //ָ�� 
   		  l=*p;
   	   }
   	   void change(int &c){         //���� 
   		  l=c;
   	   }
   	   void display_S(){            //��ӡ������ĺ��� 
   	      int s=l*l*6;
   	      cout<<"�߳�Ϊ:"<<l<<"�����Ϊ:"<<s<<endl; 
   	   }
   	   void display_V(){            //��ӡ����ĺ��� 
   	   	  int v=l*l*l;
   	   	  cout<<"�߳�Ϊ:"<<l<<"���Ϊ:"<<v<<endl;
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
	box.L()=m;        //��ֵ��ֵ��l 
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