#include<iostream>
using namespace std;
int main()
{
	int ds[6],in=0;
	for(int i=0;i<6;i++){ds[i]=0;}
	for(int j=0;j<4;j++){
		cin>>in;
		for(int i=0;i<6;i++){
			if(i+1==in){ds[i]++;break;}}}
	int d[3];in=2;
	for(int i=0;i<3;i++){d[i]=0;}
	for(int i=0;i<6;i++){
		if(ds[i]>0){d[in]=(i+1)*10+ds[i];in--;}}
	if(d[2]%10==4){cout<<"WIN"<<endl;return 0;}
	if(d[2]%10==3){cout<<"R"<<endl;return 0;}
	if(d[2]%10==2){
		if(d[1]%10==2){cout<<d[1]/10*2<<endl;return 0;}
		else {cout<<d[1]/10+d[0]/10<<endl;return 0;}}
	if(d[2]%10==1){
		if(d[1]%10==3){cout<<"R"<<endl;return 0;}
		else if(d[1]%10==2){cout<<d[2]/10+d[0]/10<<endl;return 0;}
		else {
			if(d[0]%10==2){cout<<d[2]/10+d[1]/10<<endl;return 0;}
			else {cout<<"R"<<endl;return 0;}}}
} 