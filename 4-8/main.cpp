/*4-8 各位数字之和
求任一正整数的各位数字之和。
输入格式:
输入一个正整数。
输出格式:
输出整数的各个位数字之和的结果。
输入样例:
135
输出样例:
9
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, save , n = 0,sum;
    cin >> x;
    for(save = x; save > 0;n++){
        save /= 10;
    }
    for(int i = pow(10,n); x > 0; i /= 10){
        sum += x / i;
        x %= i;
    }
    cout << sum;
    return 0;
}