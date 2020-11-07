#include <iostream>
#include <cmath>
#include"math.h"
#include"stdlib.h"
using namespace std;

class myComplex
{
  private:
      double Real;       //����ʵ�� 
      double Imaginary;  //�����鲿 
      double Modulus;    //����ģ 
	public:
	    myComplex(){       //���캯�� 
          Real=5;
		      Imaginary=6;	
      }
	    myComplex(double a){   //���ع��캯�� 
   	      Real=a;
		      Imaginary=6;		
      }
      myComplex(double a,double b){  //���ع��캯��
       	  Real=a;
		      Imaginary=b;		
      }
      myComplex(const myComplex& v){ //���ƹ��캯�� 
       	  Real=v.Real;
		      Imaginary=v.Imaginary;	
		      Modulus=v.Modulus;	
      }
      double &getReal(){             //����ʵ�� 
   	      return Real;
      } 
      double &getImaginary(){        //�����鲿 
   	      return Imaginary;
      }
      double &getModulus(){          //����ģ 
       	  Modulus=sqrt(Real*Real+Imaginary*Imaginary);
   	      return Modulus;
      }
      myComplex& operator=(const myComplex& r){//�����ĸ�ֵ 
       	  Real=r.Real;
          Imaginary=r.Imaginary;	
		  return *this;
      }
      friend myComplex operator+(myComplex &m,myComplex &n);
      friend myComplex operator-(myComplex &m,myComplex &n); 
      friend myComplex operator*(myComplex &m,myComplex &n);  
      friend myComplex operator/(myComplex &m,myComplex &n);   
      friend ostream& operator<<(ostream& os,myComplex& c);
      friend istream& operator>>(istream& is,myComplex& c);   
};
myComplex operator+(myComplex &m,myComplex &n){//���������"+"
    myComplex temp(m.getReal()+n.getReal(),m.getImaginary()+n.getImaginary());
    return temp;
}
myComplex operator-(myComplex &m,myComplex &n){//���������"-"
    myComplex temp(m.getReal()-n.getReal(),m.getImaginary()-n.getImaginary());
    return temp;
} 
myComplex operator*(myComplex &m,myComplex &n){//���������"*"
    myComplex temp(m.getReal()*n.getReal()-m.getImaginary()*n.getImaginary(),m.getReal()*n.getImaginary()+m.getImaginary()*n.getReal());
    return temp;
}
myComplex operator*(myComplex &m,float n){//���������"*"���޸����ذ汾
    myComplex temp(m.getReal()*n,m.getImaginary()*n);
    return temp;
}
myComplex operator*(float m,myComplex &n){//���������"*"���޸����ذ汾
    myComplex temp(n.getReal()*m,n.getImaginary()*m);
    return temp;
}
myComplex operator/(myComplex &m,myComplex &n){//���������"/"
    myComplex temp((m.getReal()*n.getReal()+m.getImaginary()*n.getImaginary())/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()),(n.getReal()*m.getImaginary()-m.getReal()*n.getImaginary())/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()));
    return temp;
}
myComplex operator/(myComplex &m,float n){//���������"/"�޸����ذ汾
    myComplex temp(m.getReal()/n,m.getImaginary()/n);
    return temp;
}
myComplex operator/(float m,myComplex &n){//���������"/"
    myComplex temp(m*n.getReal()/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()),(-m*n.getImaginary())/(n.getReal()*n.getReal()+n.getImaginary()*n.getImaginary()));
    return temp;
}
ostream& operator<<(ostream& os, myComplex& c){//���������"<<"
    os <<'('<<c.getReal()<<','<<c.getImaginary()<<','<<c.getModulus()<<')';
    return os;
}
istream& operator>>(istream& is,myComplex& c){//���������">>"
    is >>c.getReal()>>c.getImaginary()>>c.getModulus();
    return is;
}