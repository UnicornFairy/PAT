/*2-10 是否是3位数
输入一个正整数，若其为3位数，则输出yes，否则输出no。
输入格式:
直接输入1个正整数，没有其他任何附加字符。
输出格式:
直接输出yes或no，没有其他任何附加字符。
输入样例:
132
输出样例:
yes
输入样例:
1234
输出样例:
no
*/
#include <iostream>

using namespace std;

int main() {
    int x,n = 0;
    cin >> x;
    while(x > 0){
        x = x / 10;
        n += 1;
    }
    if(n == 3){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}