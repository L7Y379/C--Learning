设计复数类MyComplex，复数的实部和虚部均为double类型，并且放在private段；重载复数类的构造函数，及复制构造函数；重载复数运算+，-，*，/；重载复数流运算符<<,>>。同时实现返回复数实部、虚部、模的成员函数。编程设计实现下列函数： 
myComplex();   
myComplex(int a);
myComplex(int a,int b)
myComplex( myComplex& v)  
double getReal();  //返回复数的实部
double getImaginary ();  //返回复数的虚部
double getModulus (); //返回复数的模
myComplex& operator=( myComplex& rhs);  //类对象的赋值     
myComplex& operator+=( myComplex& rhs); 
myComplex& operator-=( myComplex& rhs);   
myComplex& operator*=( myComplex& rhs);
myComplex& operator/=( myComplex& rhs); 
friend myComplex operator+(myComplex m,myComplex n)
friend myComplex operator-(myComplex m,myComplex n)  
friend myComplex operator*(myComplex m,myComplex n)   
friend myComplex operator/(myComplex m,myComplex n)    
friend ostream& operator<<(ostream& os,myComplex c);
friend istream& operator>>(istream& is,myComplex& c);