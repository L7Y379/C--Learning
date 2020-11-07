#include <iostream>
#include <string>
using namespace std;

class device                          
{
    public:
		virtual void work()const=0;        
        
    private:
        
};

class inputdev:public device{
	public:
		void work();	
};

class outputdev:public device{
	public:
		void work();	
};

class key-board:public inputdev{
	public:
		void work();
		string input();	
};

class monitor:public outputdev{
	public:
		void work();
		void display(string content);	
};


  
int main()
{
    

    return 0;
}
