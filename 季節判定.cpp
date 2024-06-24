#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	switch(input/3)//取商數為區分點 
	{
		case 1:cout<<"Spring"<<endl;break;//商數為1，(3,4,5) 
		case 2:cout<<"Summer"<<endl;break;//商數為2，(6,7,8)
		case 3:cout<<"Autumn"<<endl;break;//商數為3，(9,10,11)
		default :cout<<"Winter"<<endl;//其餘(12(商數為4),1,2)皆為冬季 
	} 
	return 0;
} 