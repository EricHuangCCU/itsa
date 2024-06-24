#include<iostream>
#include<sstream>
#include<map>
using namespace std;
int main()
{
	map<int,int> c;
	
	string num,ss;
	while(getline(cin,num))//題目說明測資不只一筆(多行)，加上長短不一 
	{
		int a=0;//計算該筆測資長度 
		string n;
		istringstream cut(num);
		while(getline(cut,n,' '))//推入向量的同時並計數 
		{
			int t=0;
			istringstream ss(n);
			ss>>t;a++;
			if(c.count(t)==0){c.insert(make_pair(t,1));}
			else c[t]+=1;
		}
		int maxf=0,maxs=0;
		for(map<int,int>::iterator p=c.begin();p!=c.end();p++)
		{//走訪尋找最多次者 
			if(p->second>maxs){maxs=p->second;maxf=p->first;}
		}
		maxs>a/2?cout<<maxf<<endl:cout<<"NO"<<endl;//判定是否過半 
		c.clear();
	}
	return 0;
} 