#include<iostream>
using namespace std;
#define SIZE_M 2
#define SIZE_S 4
 
int main(){
 
	int matrix_a[SIZE_M] [SIZE_S]={{1,2,3,4},{4,5,6,7}};   //a矩阵2X4
	int matrix_b[SIZE_S] [SIZE_S]={{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};   //b矩阵4X4
	int matrix_result[SIZE_M][SIZE_S];     //结果矩阵2X4
	
 
	for(int m=0;m<SIZE_M;m++){
		for(int s=0;s<SIZE_S;s++){
			matrix_result[m][s]=0;      //初始化
			for(int n=0;n<SIZE_S;n++){
				matrix_result[m][s]+=matrix_a[m][n]*matrix_b[n][s];
			}
		}
	}
	for(int m=0;m<SIZE_M;m++){
		for(int s=0;s<SIZE_S;s++){
			cout<<matrix_result[m][s]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}