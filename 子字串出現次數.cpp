#include<iostream>
#include<string>
using namespace std;
int appearNum(string& s,int p,string& l);
int main()
{
	string inputS,inputL,save;
	
	cin>>inputS>>inputL;
	cout<<appearNum(inputS,0,inputL)<<endl;
	return 0;
}
int appearNum(string& s,int p,string& l)//字串遞迴(檢索字串，起始位置，被檢索字串) 
{
	int a=0;
	if(p>l.length())return a=0;//若偏移長度大於被檢索字串長度則回傳0 
	for(int i=0;i<s.length();i++)//依檢索字串長度進行迴圈 
	{
		if(l[i+p]==s[i])continue;//若比對符合，則持續比對至完全符合 
		else return a+=appearNum(s,p+1,l);//比對不符回傳當前符合次數 
	}
	a++;return a+=appearNum(s,p+1,l);//迴圈完畢表示比對完全符合，計次後往右偏移再測試 
}