#include<iostream>
using namespace std;

int main()
{
	int input=0;
	
	cin>>input;
	while(input--)//依據輸入的行數遞減計算次數 
	{
		int ai=0,a=0,bi=0,b=0;
		char w;//運算符號 
		
		cin>>w>>ai>>a>>bi>>b;
		switch(w)//依據運算符號來決定計算方式 
		{//依據運算符號輸出計算公式的答案 
			case '+':cout<<ai+bi<<" "<<a+b<<endl;break;
			case '-':cout<<ai-bi<<" "<<a-b<<endl;break;
			case '*':cout<<ai*bi-a*b<<" "<<a*bi+ai*b<<endl;break;
			case '/':cout<<(ai*bi+a*b)/(bi*bi+b*b)<<" "<<a*bi-ai*b/(bi*bi+b*b)<<endl;break;
		}
	}
	return 0;
} 