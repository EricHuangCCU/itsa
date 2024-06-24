#include<iostream>
#include<cmath>
using namespace std;

int m (int input);
int main()
{
	int input=0;
	
	cin>>input;//輸入整數 
	cout<<m(input)<<endl;//輸出函式的值 
	return 0;
}
int m (int input)
{
	if(input==0||input==1)//當輸入值為1或0 
	{
		return input+1;
	}
	else return m(input-1)+m(ceil(input/2));
	//因題目寫明，輸入值為大於1的整數，所以不需擔心負值 
} 