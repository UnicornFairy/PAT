/*2-5 分段函数1 （12 分）
计算分段函数，测试数据分别是-2、3、7。
输入格式:
输入一个数
输出格式:
输出x=多少，y=多少，输出的x和y值均保留两位小数
输入样例:
-3
输出样例:
x=-3.00,y=2.00
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x,y;
    cin >> x;
    if(x < 0){
        y = abs(x + 1);
    }else if(x >= 0 && x <= 5){
        y = 2 * x + 1;
    }else{
        y = sin(x) + 5;
    }
    cout << fixed << "x=" << setprecision(2) << x << ",y=" << y << endl;
    return 0;
}