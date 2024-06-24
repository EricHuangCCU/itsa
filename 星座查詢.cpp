#include<iostream>
using namespace std;
int main()
{
	string in;//因輸入的月有"0"在，故改字串 
	getline(cin,in);
	int m=10*((int)in[0]-'0')+((int)in[1]-'0');//月轉數字 
	int d=10*((int)in[3]-'0')+((int)in[4]-'0');//日轉數字
	switch(m)
	{
		case 1:d<21?cout<<"Capricorn"<<endl:cout<<"Aquarius"<<endl;break;
		case 2:d<19?cout<<"Aquarius"<<endl:cout<<"Pisces"<<endl;break;
		case 3:d<21?cout<<"Pisces"<<endl:cout<<"Aries"<<endl;break;
		case 4:d<21?cout<<"Aries"<<endl:cout<<"Taurus"<<endl;break;
		case 5:d<22?cout<<"Taurus"<<endl:cout<<"Gemini"<<endl;break;
		case 6:d<22?cout<<"Gemini"<<endl:cout<<"Cancer"<<endl;break;
		case 7:d<23?cout<<"Cancer"<<endl:cout<<"Leo"<<endl;break;
		case 8:d<24?cout<<"Leo"<<endl:cout<<"Virgo"<<endl;break;
		case 9:d<24?cout<<"Virgo"<<endl:cout<<"Libra"<<endl;break;
		case 10:d<24?cout<<"Libra"<<endl:cout<<"Scorpio"<<endl;break;
		case 11:d<23?cout<<"Scorpio"<<endl:cout<<"Sagittarius"<<endl;break;
		case 12:d<22?cout<<"Sagittarius"<<endl:cout<<"Capricorn"<<endl;break;
	}
	return 0;
} 