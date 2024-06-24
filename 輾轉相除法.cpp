#include<iostream>
using namespace std;

int euc(int a,int b);//輾轉相除法遞迴函式宣告 
int main()
{
	int input=0,input2=0,c=0;
	
	cin>>input>>input2;
	if(input<input2)//確認大小順序 
	{
		c=input;
		input=input2;
		input2=c;
	}
	cout<<euc(input,input2)<<endl;
	return 0;
}
int euc(int a,int b)
{
	int f=a%b;
	if(f==0) return b;
	else return euc(b,f);
}