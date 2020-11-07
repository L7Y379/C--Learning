#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#endif
#include <iostream>
using namespace std;

class cstring
{
    public:
        cstring();
        cstring(const char *_str);
        cstring(const cstring &_str);
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

const cstring cstring::operator +(const cstring &_str)
{
    int newLength = length + _str.length;
    char * newStr = new char[newLength + 1]; 
    newStr[newLength] = '\0';
    strncpy(newStr, str, length);
    strncat(newStr, _str.str, _str.length);

    return cstring(newStr);
}

void cstring::operator =(const cstring &_str)
{
    str = _str.str;
    length = _str.length;
}

istream & operator >>(istream &_in, cstring &_str)
{
    _in >> _str.str;
    _str.length = strlen(_str.str);
    return _in;
}

ostream & operator <<(ostream &_out, cstring &_str)
{
    _out << _str.str << endl << "length: " << _str.length;
    return _out;
}

int main()
{
    cstring mStr;
    cstring mStr_0(mStr);
    cstring mStr_1("Luo");
    cstring mStr_2("Yue");

    cout << "mStr: " << mStr << endl;
    cout << "mStr_0: " << mStr_0 << endl;
    cout << "mStr_1: " << mStr_1 << endl;
    cout << "mStr_2: " << mStr_2 << endl;
    cout << "\n" << endl;

    mStr_0 = mStr_1;
    mStr = mStr_1 + mStr_2;

    cout << mStr << endl;
    cout << mStr_0 << endl;

    return 0;
}
