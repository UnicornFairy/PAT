/*2-7 整数绝对值
从键盘上输入一个整数，输出其对应的绝对值，要求不能使用数学函数。
输入格式:
直接输入一个整数，没有其它任何附加字符。
输出格式:
直接输出一个整数，没有其它任何附加字符。
输入样例:
-3
输出样例:
3
*/
#include <iostream>

using namespace std;
int main() {
    int i;
    cin >> i;
    if(i >= 0){
        cout << i << endl;
    }else{
        cout << i * (-1) << endl;
    }

    return 0;
}