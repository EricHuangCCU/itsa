#include<iostream>
using namespace std;

int main()
{
	int inputx=0,inputy=0;
	while(cin>>inputx>>inputy)//依序讀入X，Y值 
	{
		if(inputx*inputx+inputy*inputy <= 10000) cout<<"inside"<<endl;
		//若X平方+Y平方小於半徑(100)的平方，輸出"inside" 
		else cout<<"outside"<<endl;
	}
	return 0;
} 