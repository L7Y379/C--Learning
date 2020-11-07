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
	cout<<"比较1与2的大小，返回值为："<<endl; 
    cout<<compare(1,2)<<endl;
    cout<<"比较3与2的大小，返回值为："<<endl; 
    cout<<compare(3,2)<<endl;
    cout<<"比较2与2的大小，返回值为："<<endl; 
    cout<<compare(2,2)<<endl;
    cout<<"比较3.1与2的大小，返回值为："<<endl;
    cout<<compare(3.1,2)<<endl;
    cout<<"比较3与4.5的大小，返回值为："<<endl;
    cout<<compare(3,4.5)<<endl;
    cout<<"比较3.1与3.10的大小，返回值为："<<endl;
    cout<<compare(3.1,3.10)<<endl;

    return 0;
}
