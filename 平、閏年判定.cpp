#include<iostream>
using namespace std;
int main()
{
	int in=0;
	while(cin>>in)
	{
		if(in%400==0)cout<<"Bissextile Year"<<endl;
		else
		{
			if(in%100==0)cout<<"Common Year"<<endl;
			else
			{
				in%4==0?cout<<"Bissextile Year"<<endl:cout<<"Common Year"<<endl;
			}
		}
	}
	return 0;
} 