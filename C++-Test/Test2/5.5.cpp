#include<iostream>
using namespace std;
class Stack
{
	public:
		Stack()     //构造函数 
		{
			top=-1;
		}
		bool push(int n)//压栈
		{
			if(!isfull())
				data[++top]=n;
			else
				return false;
			return true;
		}
		bool pop()//退栈
		{
			if(!isempty())
				top--;
			else
				return false;
			return true;
		}
		int gettop()//得到栈顶元素
		{
			return data[top];
		}
		bool isempty()//判断是否为空
		{
			return top==-1?true:false;
		}
		bool isfull()//判断是否已满
		{
			return top==9?true:false;
		}
	private:
		int data[10];
		int top;
};

int main()
{
	Stack s;//建立一个栈
	if(!s.push(7))//将7入栈；
	{
		cout<<"栈溢出"<<endl;
		return 0;
	}
	cout<<"元素“"<<"7"<<"”进栈"<<endl;
	if(!s.push(17))//将17入栈；
	{
		cout<<"栈溢出"<<endl;
		return 0;
	}
	cout<<"元素“"<<"17"<<"”进栈"<<endl;
	if(!s.push(27))//将27入栈；
	{
		cout<<"栈溢出"<<endl;
		return 0;
	}
	cout<<"元素“"<<"27"<<"”进栈"<<endl;
	if(!s.push(37))//将37入栈；
	{
		cout<<"栈溢出"<<endl;
		return 0;
	}
	cout<<"元素“"<<"37"<<"”进栈"<<endl;
	cout<<"栈顶元素“"<<s.gettop()<<"”出栈"<<endl;//读出并输出栈顶元素；
	s.pop();//退栈
	cout<<"栈顶元素“"<<s.gettop()<<"”出栈"<<endl;//读出并输出栈顶元素；
	s.pop();//退栈
}