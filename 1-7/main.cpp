/*7-7 输出个位数字
输入一个任意整数，将其个位输出。
输入格式:
直接输入一个整数，没有任何附加字符。
输出格式:
直接输出结果，没有任何附加字符。
输入样例:
24
输出样例:
4
*/
#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
//    while(x >= 10){
//        x = x % 10;
//        if(x < 10)
//            cout << x % 10 << endl;
//    }
    cout << x % 10 << endl;
    return 0;
}