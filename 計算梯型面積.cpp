#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //宣告三數分別代表上底、下底、高
    int a,b,c;
    //輸入
    cin >> a >> b >> c;
    //計算梯形面積
    double area = ((a+b)*c)/2.0;
    //四捨五入取到小數點第一位
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;

    return 0;
}