#include<iostream>
#include<string>
using namespace std; 
template<typename T>
class test{
	private:
		int num;
	public:
		T* key;
		T* val;
		T look(T word){
			int j;
			for(j = 0;j < num;j++){
				if(key[j] == word)return val[j];
			}
			return string("未录入");
		}
		test(T array1[],T array2[]){
			cout<<sizeof(array1)<<endl;
			cout<<sizeof(array1[0])<<endl;
			num = sizeof(array1)/sizeof(*array1)+1;
			key = (T*)malloc(sizeof(T)*num);
			val = (T*)malloc(sizeof(T)*num);
			cout<<num<<endl;
			int i;
			for(i = 0;i <num;i++){
				key[i] = array1[i];
				val[i] = array2[i];
				cout<<key[i]<<endl;
				cout<<val[i]<<endl;
			} 
		}
};

int main(){
	string a[] = {
		"zoo",
		"mammal",
		"felid",
		"tiger",
		"lynx" 
	};
	string b[] = {
		"动物园",
		"哺乳动物",
		"猫科动物",
		"老虎",
		"猞猁" 
	};
	test <string> test(a,b);

	return 0;
}