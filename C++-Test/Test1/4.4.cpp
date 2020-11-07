#include <iostream>
using namespace std;
int compare(int a,int b)   //整型
{
        int c;
        if(a>b){
            c=1;
        }
        else if(a==b){
            c=0;
        }
        else{
            c=-1;
        }
        return c;
}

double compare(double a,double b)  //双精度
{
    	int c;
    	if(a>b){
            c=1;
        }
        else if(a==b){
            c=0;
        }
        else{
            c=-1;
        }
        return c;
}

float compare(float a,float b)  //浮点数
{
    	int c;
        if(a>b){
            c=1;
        }
        else if(a==b){
            c=0;
        }
        else{
            c=-1;
        }
        return c;
}

int compare(int *a,int *b)  //指针类型
{
        int d=*a;
	    int e=*b;
	    int c;
        if(d>e){
            c=1;
        }
        else if(d==e){
            c=0;
        }
        else{
            c=-1;
        }
        return c;
}
int main()
{
    int c;
	int a=1;
	int b=2;
	c=compare(1,2);           //对重载函数进行测试
	cout<<c<<endl;
	c=compare(1.2,1.1);
	cout<<c<<endl;
	c=compare(3,3);
	cout<<c<<endl;
	int *p1=&a;
	int *p2=&b;
   c=compare(p1,p2);
   cout<<c<<endl;
	
    return 0;
}