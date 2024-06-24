#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //宣告兩數分別代表底、高
    int a,b;
    //輸入
    cin >> a >> b;
    //計算面積
    double area = (a*b)/2.0;
    //四捨五入取到小數點第一位
    cout << fixed << setprecision(1) << area << endl;

    return 0;
}