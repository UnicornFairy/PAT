/*3-2 回文数 （10 分）
判断一个5位数是不是回文数。例如12321是一个回文数，即它的个位与万位相同，十位与千位相同。
输入格式:
直接输入一个5位数正整数。
输出格式:
输出“yes”或“no”。此处均为小写字母
输入样例:
12521
输出样例:
yes
输入样例:
65432
输出样例:
no
 */
#include <iostream>

using namespace std;

int main() {
    int i,a,b,c,d;
    cin >> i;
    a = i / 10000;        //万位
    b = i % 10000 / 1000; //千位
    c = i % 100 / 10 ;     //十位
    d = i % 10 ;    //个位
    //cout << a << b << c << d << endl;
    if(a == d && b == c){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}