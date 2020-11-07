#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#endif
#include <iostream>
using namespace std;

class PP;

class cstring                          //��cstring
{
    public:
        cstring();                    //���캯��
        cstring(const char *_str);       //���ع��캯��
        cstring(const cstring &_str);    //���ƹ��캯��
        friend class PP;                //����PP��Ϊ��Ԫ�� 
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

const cstring cstring::operator +(const cstring &_str)//�������+��������
{
    int newLength = length + _str.length;
    char * newStr = new char[newLength + 1]; 
    newStr[newLength] = '\0';
    strncpy(newStr, str, length);
    strncat(newStr, _str.str, _str.length);

    return cstring(newStr);
}

void cstring::operator =(const cstring &_str)       //�������=��������
{
    str = _str.str;
    length = _str.length;
}

istream & operator >>(istream &_in, cstring &_str) //���ء�>>��
{
    _in >> _str.str;
    _str.length = strlen(_str.str);
    return _in;
}

ostream & operator <<(ostream &_out, cstring &_str)//��<<��,��ӡ�ַ����ͳ���
{
    _out << _str.str << endl << "length: " << _str.length;
    return _out;
}
 
class PP                             //��PP 
{
	public:
		void putstr(cstring &s){     //putstr���� 
			cout<<s.str<<endl;
		}
}; 
int main()
{
    cstring mStr;               //�������mStr
    cstring mStr_0;
    cstring mStr_1("Luo");       //�������mStr_1
    cstring mStr_2("Yue");       //�������mStr_2

    cout << "mStr: " << mStr << endl;
    cout << "mStr_1: " << mStr_1 << endl;
    cout << "mStr_2: " << mStr_2 << endl;
    cout << "\n" << endl;
    cout << "�������mStr_0���ַ�����"<<endl;
	cin >> mStr_0;
	cout << "mStr_0: " << mStr_0 << endl;
	cout << "�������mStr_1���ַ�����"<<endl;
	cin >> mStr_1;
	cout << "mStr_1: " << mStr_1 << endl;
    PP p;                         //����һ��PP��Ķ���p 
    p.putstr(mStr);               //����putstr������ӡ����mStr���ַ��� 

    return 0;
}
