#include<iostream>
using namespace std;
int main()
{
	int inputN=0,t[24]={0};//一天24小時 
	cin>>inputN;
	for(int i=0;i<inputN;i++)//因為(返回時間恆大於出發時間)，故依輸入時間依序填格子 
	{
		int a=0,b=0;
		cin>>a>>b;
		for(int j=a-1;j<b-1;j++){t[j]++;}
	}
	inputN=t[0];//將不需要的空間再次利用 
	for(int i=0;i<24;i++){if(inputN<t[i])inputN=t[i];}//尋最大值 
	cout<<inputN<<endl;
	return 0;
}