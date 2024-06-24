#include<iostream>
using namespace std;

int main()
{
	int startH=0,startM=0,endH=0,endM=0;
	
	cin>>startH>>startM;//讀入開始時間 
	cin>>endH>>endM;//讀入結束時間
	int time=(endH*60+endM)-(startH*60+startM);//計算總時數 
	if(time<=120&&time>=0) cout<<time/30*30<<endl;//2小時內的費用 
	else if(time>120&&time<=240) cout<<(time-120)/30*40+120<<endl;//4小時內的費用+2小時的費用
	else cout<<(time-240)/30*60+120+160<<endl;//4小時外的費用+4小時的費用+2小時的費用
	
	return 0;
} 