#include <iostream>
#include <cmath>
#include "mycomplex.h"
using namespace std;

int main(){
	myComplex a1(9,10);       //����һ������a1
	myComplex a2(7,8);      //����һ������a2
	cout<<"�������������������a1��a2������ʾ�������д����ҷֱ�Ϊʵ�����鲿��ģ��"<<endl; 
	cout<<a1<<endl;
	cout<<a2<<"\n"<<endl;
	
	myComplex a3;            //����һ������a3 
	cout<<"������һ�����������a3��"<<endl;
	
	a3=a1+a2;                //��������"+" 
	cout<<"����a3=a1+a2��a3��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a3<<"\n"<<endl;
	
	a3=a1-a2;                //��������"-"
	cout<<"����a3=a1-a2��a3��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a3<<"\n"<<endl;
	
	a3=a1*a2;                //��������"*"
	cout<<"����a3=a1*a2��a3��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a3<<"\n"<<endl;
	
    a3=a1/a2;                //��������"/"
    cout<<"����a3=a1/a2��a3��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a3<<"\n"<<endl;
	
	a1+=a2;                  //��������"+="
	cout<<"����a1+=a2��a1��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1-=a2;                  //��������"-="
	cout<<"����a1-=a2��a1��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1*=a2;                  //��������"*="
	cout<<"����a1*=a2��a1��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a1<<"\n"<<endl;
	
	a1/=a2;                  //��������"/="
	cout<<"����a1/=a2��a1��ʵ�����鲿��ģ�ֱ�Ϊ��"<<endl;
	cout<<a1<<"\n"<<endl;
	return 0;
}