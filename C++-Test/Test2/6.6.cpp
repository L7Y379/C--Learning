#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#endif
#include <iostream>
using namespace std;

class PP;

class cstring                          //类cstring
{
    public:
        cstring();                    //构造函数
        cstring(const char *_str);       //重载构造函数
        cstring(const cstring &_str);    //复制构造函数
        friend class PP;                //定义PP作为友元类 
        ~cstring();
    public:
        const cstring operator +(const cstring &_str);
        void operator =(const cstring &_str);
    public:
        friend istream & operator >>(istream &_in, cstring &_str);
        friend ostream & operator <<(ostream &_out, cstring &_str);
    private:
        char *str;
        int length;
};

cstring::cstring()
{
    str = new char;
    str[0] = '\0';
    length = 0;
}

cstring::cstring(const char *_str)
{
    length = strlen(_str);
    str = new char[length + 1]; 
    str[length] = '\0';
    strncpy(str, _str, length+1);
}

cstring::cstring(const cstring &_str)
{
    length = _str.length;
    str = new char[length + 1]; 
    str[length] = '\0';
    strncpy(str, _str.str, length+1);
}

cstring::~cstring(){}

const cstring cstring::operator +(const cstring &_str)//运算符“+”的重载
{
    int newLength = length + _str.length;
    char * newStr = new char[newLength + 1]; 
    newStr[newLength] = '\0';
    strncpy(newStr, str, length);
    strncat(newStr, _str.str, _str.length);

    return cstring(newStr);
}

void cstring::operator =(const cstring &_str)       //运算符“=”的重载
{
    str = _str.str;
    length = _str.length;
}

istream & operator >>(istream &_in, cstring &_str) //重载“>>”
{
    _in >> _str.str;
    _str.length = strlen(_str.str);
    return _in;
}

ostream & operator <<(ostream &_out, cstring &_str)//“<<”,打印字符串和长度
{
    _out << _str.str << endl << "length: " << _str.length;
    return _out;
}
 
class PP                             //类PP 
{
	public:
		void putstr(cstring &s){     //putstr函数 
			cout<<s.str<<endl;
		}
}; 
int main()
{
    cstring mStr;               //定义对象mStr
    cstring mStr_0(mStr);        //定义对象mStr_0
    cstring mStr_1("Luo");       //定义对象mStr_1
    cstring mStr_2("Yue");       //定义对象mStr_2

    cout << "mStr: " << mStr << endl;
    cout << "mStr_0: " << mStr_0 << endl;
    cout << "mStr_1: " << mStr_1 << endl;
    cout << "mStr_2: " << mStr_2 << endl;
    cout << "\n" << endl;

    mStr_0 = mStr_1;
    mStr = mStr_1 + mStr_2;

    cout << mStr << endl;
    cout << mStr_0 << endl;
    PP p;                         //定义一个PP类的对象p 
    p.putstr(mStr);               //调用putstr函数打印对象mStr的字符串 

    return 0;
}