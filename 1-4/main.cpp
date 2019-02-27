/*
    7-4 输入圆的半径r，求其面积并输出。
    输入圆的半径r，求其面积并输出，其中圆周率取值为3.1415926。
    输入格式:
    输入一个大于零的实数，没有任何附加字符。
    输出格式:
    在一行中按照“r=半径，area=结果”。
    输入样例:
    1
    输出样例:
    r=1,area=3.14159
*/
#include <iostream>

using namespace std;

int main() {
    double r;
    cin >> r;
    cout << "r=" << r << ",area=" << 3.1415926 * r * r << endl;
    return 0;
}