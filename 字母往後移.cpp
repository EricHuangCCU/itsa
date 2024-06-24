#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in;
	getline(cin,in);
	int p=0;cin>>p;
	for(int i=0;i<in.length();i++)
	{
		if((int)in[i]>='A'&&(int)in[i]<='Z')
		{
			in[i]=(char)(((int)(in[i]-'A')+p)%26+'A');
		}
		if((int)in[i]>='a'&&(int)in[i]<='z')
		{
			in[i]=(char)(((int)(in[i]-'a')+p)%26+'a');
		}
		if((int)in[i]>='0'&&(int)in[i]<='9')
		{
			in[i]=(char)(((int)(in[i]-'0')+p)%10+'0');
		}
	}
	cout<<in<<endl;in=" "; 
	return 0;
}