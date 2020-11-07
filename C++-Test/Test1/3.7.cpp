#include <iostream>
using namespace std;
int main()
{
    double a,b,r;
    char c;
    cin >> a;
	if(!cin) error("no firs operand");
	while (cin >> c)
	{
		if (c != ';')
		{
			cin >> r;
		}
		if (!cin)
		{
			error("no second operand");
		}
	}
    switch(c){
    case '+': r = a + b; break;
    case '-': r = a - b; break;
    case '*': r = a * b; break;
    case '/': r = a / b; break;
    case '%': r = a % b; break;
    default: r = 0;
    }
 
    cout<<r<<endl;
    return 0;
}