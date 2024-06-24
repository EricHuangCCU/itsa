#include<iostream>
using namespace std;
int main()
{
	int input=0,Bin[8];
	
	cin>>input;
	if(input<0) input+=256;//負數則推移至正整數 
	for(int i=7;i>=0;i--)//逆向遞減輸入 
    {
    	Bin[i]=input%2;//將餘數結果存入 
    	input/=2;//每算出一位數則留商數繼續往下算 
    }
    for(int i=0;i<8;i++)//順向依序輸出 
    {
    	if(i==7)cout<<Bin[i]<<endl;//若為最後一位則換行 
    	else  cout<<Bin[i];//否則緊接在後輸出 
    }	
	return 0;
}