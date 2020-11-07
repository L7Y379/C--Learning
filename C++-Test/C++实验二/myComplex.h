#include <iostream>
#include <cmath>
#include"math.h"
#include"stdlib.h"
using namespace std;

class myComplex
{
  private:
      double Real;       //定义实部 
      double Imaginary;  //定义虚部 
      double Modulus;    //定义模 
	public:
	    myComplex(){       //构造函数 
          Real=5;
		      Imaginary=6;	
      }
	    myComplex(double a){   //重载构造函数 
   	      Real=a;
		      Imaginary=6;		
      }
      myComplex(double a,double b){  //重载构造函数
       	  Real=a;
		      Imaginary=b;		
      }
      myComplex(const myComplex& v){ //复制构造函数 
       	  Real=v.Real;
		      Imaginary=v.Imaginary;	
		      Modulus=v.Modulus;	
      }
      double &getReal(){             //返回实部 
   	      return Real;
      } 
      double &getImaginary(){        //返回虚部 
   	      return Imaginary;
      }
      double &getModulus(){          //返回模 
       	  Modulus=sqrt(Real*Real+Imaginary*Imaginary);
   	      return Modulus;
      }
      myComplex& operator=(const myComplex& r){//类对象的赋值 
       	  Real=r.Real;
          Imaginary=r.Imaginary;	
		  return *this;
      }
      myComplex& operator+=(const myComplex& r){//重载运算符"+=" 
   	      Real+=r.Real;
   	      Imaginary+=r.Imaginary;
       	  return *this;
      }
      myComplex& operator-=(const myComplex& r){//重载运算符"-="
       	  Real-=r.Real;
   	      Imaginary-=r.Imaginary;
       	  return *this;
      }
      myComplex& operator*=(const myComplex& r){//重载运算符"*="
          double k;                             //定义一个记录原始Real值的量 
          k=Real;
   	      Real=Real*r.Real-Imaginary*r.Imaginary;
   	      Imaginary=k*r.Imaginary+r.Real*Imaginary;
       	  return *this;
      }
      myComplex& operator/=(const myComplex& r){//重载运算符"/="
       	  double k;                             //定义一个记录原始Real值的量 
          k=Real;
          Real=(Real*r.Real+Imaginary*r.Imaginary)/(r.Real*r.Real+r.Imaginary*r.Imaginary);
   	      Imaginary=(r.Real*Imaginary-k*r.Imaginary)/(r.Real*r.Real+r.Imaginary*r.Imaginary);
       	  return *this;
       }
      friend myComplex operator+(myComplex &m,myComplex &n);
      friend myComplex operator-(myComplex &m,myComplex &n); 
      friend myComplex operator*(myComplex &m,myComplex &n);  
      friend myComplex operator/(myComplex &m,myComplex &n);   
      friend ostream& operator<<(ostream& os,myComplex& c);
      friend istream& operator>>(istream& is,myComplex& c);   
};
myComplex operator+(myComplex &m,myComplex &n){//重载运算符"+"
    myComplex temp(m.getReal()+n.getReal(),m.getImaginary()+n.getImaginary());
    return temp;
}
myComplex operator-(myComplex &m,myComplex &n){//重载运算符"-"
    myComplex temp(m.getReal()-n.getReal(),m.getImaginary()-n.getImaginary());
    return temp;
} 
myComplex operator*(myComplex &m,myComplex &n){//重载运算符"*"
    myComplex temp(m.getReal()*n.getReal()-m.getImaginary()*n.getImaginary(),m.getReal()*n.getImaginary()+m.getImaginary()*n.getReal());
    return temp;
}
myComplex operator/(myComplex &m,myComplex &n){//重载运算符"/"
    myComplex temp((m.getReal()*n.getReal()+m.getImaginary()*n.getImaginary())/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()),(n.getReal()*m.getImaginary()-m.getReal()*n.getImaginary())/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()));
    return temp;
}
ostream& operator<<(ostream& os, myComplex& c){//重载运算符"<<"
    os <<'('<<c.getReal()<<','<<c.getImaginary()<<','<<c.getModulus()<<')';
    return os;
}
istream& operator>>(istream& is,myComplex& c){//重载运算符">>"
    is >>c.getReal()>>c.getImaginary()>>c.getModulus();
    return is;
}