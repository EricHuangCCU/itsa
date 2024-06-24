#include<iostream>
using namespace std;
int main()
{
	int an=0,ana[4],ain[4];
	cin>>an;
	for(int i=3;i>=0;i--)//逆向讀入陣列 
	{
		ana[i]=0;ain[i]=0;
		ana[i]=an%10;an/=10;
	}
	while(true)//保持無限迴圈狀態 
	{
		int in=0,a=0,b=0;
		cin>>in;
		an=0;//解除無限迴圈用 
		for(int i=3;i>=0;i--)//確保位置與答案相同 
		{
			ain[i]=in%10;in/=10;//逆向讀入陣列 
			if(ain[i]==0)an++;//判定0的個數 
			if(ain[i]==ana[i]){a++;continue;}//確認同位置且同答案 
			else {for(int j=0;j<4;j++){if(ain[i]==ana[j]&&j!=i){b++;break;}}}//尋找其餘3個的位置是否有同樣答案 
		}
		if(an==4)break;//判定是否4個0 
		else cout<<a<<"A"<<b<<"B"<<endl;//輸出答案 
	}
	return 0;
} 