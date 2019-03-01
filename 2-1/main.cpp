/*2-1 小写字母转换为大写字母
输入一个小写字母，将其转换为相应大写字母并输出。
输入格式:
在一行中输入一个小写字母。
输出格式:
输出相应大写字母。
输入样例:
a
输出样例:
A
 */
#include <iostream>

using namespace std;

int main() {
    char a;
    cin >> a;
    char b = a - 32;
    cout << b << endl;
    return 0;
}