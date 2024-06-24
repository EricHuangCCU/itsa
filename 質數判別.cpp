#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int input=0,output=0;
	bool end=0;
	
	while(cin>>input)
	{
		input==1?end=true:end=false;//判斷是否為1
		output=sqrt(input)*10/10;//根號找出其因數列的中位數(最接近的數，不一定就是中位數) 
		for(int i=output;i>1;i--)//開始往下尋找能整除的數 
		{
		input%i==0?end=true:end=false;
		if(end==true) break;//找到則跳脫迴圈 
		}
		end?cout<<"NO"<<endl:cout<<"YES"<<endl;//輸出結果 
	}
	return 0;
}