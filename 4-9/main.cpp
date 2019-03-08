/*4-9 10个整数平均值
从键盘上输入10个整数，求其平均值。
输入格式:
在一行中输入10个用空格间隔的整数。
输出格式:
在一行中按照“aver=结果”的顺序输出，结果是原样输出的实数，保留6位小数，没有其它附加格式。
输入样例:
2 5 8 3 6 9 1 4 7 11
输出样例:
aver=5.600000*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a;
    double sum = 0;
    while(1){
        for(int i = 0; i < 10; i++) {
            cin >> a;
            sum += a;
        }
        cout << "aver=" << fixed << setprecision(6) << sum / 10;
        return 0;
    }
}