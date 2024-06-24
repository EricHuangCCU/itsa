#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a;
    cin >> a ;
    //round函式四捨五入到個數位，故乘10後round，再除10.0回來
    cout << fixed << setprecision(1) << round(a*a*10)/10.0 << endl;

    return 0;
}