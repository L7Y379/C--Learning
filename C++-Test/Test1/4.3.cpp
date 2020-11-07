#include <iostream>
using namespace std;

int *p;
void SomeFunction1(){    //动态内存分配函数
    p = new int;
    *p = 17;
}
void SomeFunction2(){    //动态内存释放函数
    delete p;

}
int add1(int *p1,int *p2){  //用指针实现参数和返回值的传递
	    int a=*p1;
	    int b=*p2;
		int c=a+b;
       return c;
    }
    int& add2(int &a,int &b){   //用引用实现参数和返回值的传递
		int c=a+b;
       return c;
    }
int main()
{
    SomeFunction1();     //在main()中实现分配的动态内存
    cout<<*p<<endl;
    SomeFunction2(); 
	int a=1;
	int b=2;
	int *p1=&a;
	int *p2=&b;
    cout<<add1(p1,p2)<<endl;
    cout<<add2(a,b)<<endl;
    return 0;
}