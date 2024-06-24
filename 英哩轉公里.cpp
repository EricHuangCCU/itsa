#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int input;
	while(cin>>input)//讀入整數 
	{
		cout<<fixed<<setprecision(1)<<(input*1.6L*10/10)<<endl;
		/*輸出<<指定浮點數表示<<小數點後幾位(預設為6)
		<<整數轉換小數(乘L)並確保小數點後僅一位<<換行*/ 
	}
	return 0;
}