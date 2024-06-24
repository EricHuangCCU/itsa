#include<iostream>
using namespace std;
int main()
{
	string in;
	getline(cin,in);
	if(((int)in[1]-'0')<1||((int)in[1]-'0')>2){cout<<"WRONG!!!"<<endl;return 0;}//性別檢測 
	for(int i=1;i<9;i++)//數字區域是否為數字 
	{
		if(in[i]<'0'||in[i]>'9'){cout<<"WRONG!!!"<<endl;return 0;}
	}
	int p=0,loc=0;
	loc=(int)in[0]; 
	if(loc<'A'||loc>'Z'){cout<<"WRONG!!!"<<endl;return 0;}//區域碼轉換 
	else if(loc<=72){loc-=55;}//A~H
	else if(loc==73){loc=34;}//I
	else if(loc>73&&loc<=78){loc-=56;}//J~N 
	else if(loc==79){loc=35;}//O 
	else if(loc>79&&loc<=86||loc==90){loc-=57;}//P~V && Z 
	else if(loc==87){loc=32;}//W 
	else if(loc>87&&loc<=89){loc-=58;}//X、Y 
	p=(loc/10)+9*(loc%10);//取十位數再加上個位數*9 
	for(int i=1;i<9;i++){p+=(9-i)*((int)in[i]-'0');}//加上之後的公式總和 
	if(10-(p%10)!=((int)in[9]-'0')){cout<<"WRONG!!!"<<endl;return 0;}//檢查碼判定 
	else {cout<<"CORRECT!!!"<<endl;return 0;}	
}