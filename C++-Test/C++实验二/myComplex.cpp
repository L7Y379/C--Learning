#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;

int main(){
	myComplex a1(9,10);       //定义一个对象a1
	myComplex a2(7,8);      //定义一个对象a2
	cout<<"定义了两个复数类对象a1、a2如下所示，括号中从左到右分别为实部、虚部、模："<<endl; 
	cout<<a1<<endl;
	cout<<a2<<"\n"<<endl;
	
	myComplex a3;            //定义一个对象a3 
	cout<<"定义了一个复数类对象a3："<<endl;
	
	a3=a1+a2;                //检测运算符"+" 
	cout<<"运算a3=a1+a2后，a3的实部、虚部和模分别为："<<endl;
	cout<<a3<<"\n"<<endl;
	
	a3=a1-a2;                //检测运算符"-"
	cout<<"运算a3=a1-a2后，a3的实部、虚部和模分别为："<<endl;
	cout<<a3<<"\n"<<endl;
	
	a3=a1*a2;                //检测运算符"*"
	cout<<"运算a3=a1*a2后，a3的实部、虚部和模分别为："<<endl;
	cout<<a3<<"\n"<<endl;
	
    a3=a1/a2;                //检测运算符"/"
    cout<<"运算a3=a1/a2后，a3的实部、虚部和模分别为："<<endl;
	cout<<a3<<"\n"<<endl;
	
	a1+=a2;                  //检测运算符"+="
	cout<<"运算a1+=a2后，a1的实部、虚部和模分别为："<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1-=a2;                  //检测运算符"-="
	cout<<"运算a1-=a2后，a1的实部、虚部和模分别为："<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1*=a2;                  //检测运算符"*="
	cout<<"运算a1*=a2后，a1的实部、虚部和模分别为："<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1/=a2;                  //检测运算符"/="
	cout<<"运算a1/=a2后，a1的实部、虚部和模分别为："<<endl;
	cout<<a1<<"\n"<<endl;
	return 0;
}