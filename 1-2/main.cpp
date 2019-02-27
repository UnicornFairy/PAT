/*7-2 是不是太胖了
据说一个人的标准体重应该是其身高（单位：厘米）减去100、再乘以0.9所得到的公斤数。已知市斤是公斤的两倍。
现给定某人身高，请你计算其标准体重应该是多少？（顺便也悄悄给自己算一下吧……）
输入格式：
输入第一行给出一个正整数H（100 < H ≤ 300），为某人身高。
输出格式：
在一行中输出对应的标准体重，单位为市斤，保留小数点后1位。
输入样例：
169
输出样例：
124.2
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;      //身高
    cout << "请输入一个正整数H（100 < H ≤ 300），为某人身高。" << endl;
    cin >> height;
    double sj = (height - 100) * 0.9 * 2 ;
    cout << fixed<< setprecision(1) << sj << endl;
    return 0;
}