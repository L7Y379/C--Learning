#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    for (i=0;i<10;i++)
    {
       cin >> a[i]; // 键盘输入 10 个数
    }
    int *p=&a;      //定义一个指针访问数组
    for(i=0;i<10;i++,p++)
    {
       printf("%d\n",*p);
    } 
    int j,n,k,m;
    n=10;
    for(m=0;m<n-1;m++){     //冒泡算法进行排序
    for(j=0;j<n-1;j++){
       if(a[j]>a[j+1]){
          k=a[j+1];
          a[j+1]=a[j];
          a[j]=a[j+1];
       }
    }
    }
    return 0;
}