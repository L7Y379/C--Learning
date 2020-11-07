利用继承与派生机制实现学校的学生与教师基本信息管理。假设各类人员的基本信息如下：
  Teacher（教师）类：姓名、年龄、性别、工号、职称；
Undergraduate（本科生）类：姓名、年龄、性别、学号、系别
Postgraduate（研究生）类：姓名、年龄、性别、学号、系别、导师
根据上面的要求完成如下任务：
（1）设计基类Person，包含各类人员共有的基本信息，以及静态数据成员counter，用于统计学校人员总数；设计设置人员基本信息、显示人员基本信息及获取人员总数的成员函数。Person类声明如下：
class Person
{
   protected:
     string name;
     int age;
     char gender;
     static int counter；     // 统计总人数
public:
     Person();   
     Person(string, int, char);  //通过参数初始化成员
     ~Person();
     void set(string, int, char);   //设置人员基本信息
     void show();             //显示人员基本信息
     int get_counter();          //获取人员总数     
}；
（2）编程实现Person类各函数，分析其余各类人员的特征，设计合理的继承结构，并在Person类的基础上派生出其余各类人员，每个类需要有构造函数和析构函数、设置人员信息、显示人员基本信息及获取人员总数的成员函数。 
（3）分别采用public、protected、private 三种继承方式，观察不同继承方式对基类成员在派生类中访问属性的影响。
（4）在主函数中测试各类的功能。