#include <iostream>
#include <string>
#include <cmath>
using namespace std;

template<typename T>
int compare(const T& a,const T& b){
	if(a>b){
		return 1;
	}
	else if(a==b){
		return 0;
	}
	else if(a<b){
		return -1;
	}
}

template<typename T,typename U>
int compare(const T& a,const U& b){
	if(a>b){
		return 1;
	}
	else if(a==b){
		return 0;
	}
	else if(a<b){
		return -1;
	}
}

  
int main()
{	
	cout<<"�Ƚ�1��2�Ĵ�С������ֵΪ��"<<endl; 
    cout<<compare(1,2)<<endl;
    cout<<"�Ƚ�3��2�Ĵ�С������ֵΪ��"<<endl; 
    cout<<compare(3,2)<<endl;
    cout<<"�Ƚ�2��2�Ĵ�С������ֵΪ��"<<endl; 
    cout<<compare(2,2)<<endl;
    cout<<"�Ƚ�3.1��2�Ĵ�С������ֵΪ��"<<endl;
    cout<<compare(3.1,2)<<endl;
    cout<<"�Ƚ�3��4.5�Ĵ�С������ֵΪ��"<<endl;
    cout<<compare(3,4.5)<<endl;
    cout<<"�Ƚ�3.1��3.10�Ĵ�С������ֵΪ��"<<endl;
    cout<<compare(3.1,3.10)<<endl;

    return 0;
}
