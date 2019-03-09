/*7-3 数字之和为5的数的个数
统计100以内的各位数字之和为5的自然数的个数。
输出格式:
直接输出结果，没有任何多余字符。
输出样例:
6
*/
#include <iostream>

using namespace std;

int main() {
    int n = 1;
    for(int i = 10; i <= 100; i++){
        if(i / 10 + i % 10 == 5){
            n++;
        }
    }
    cout << n;
    return 0;
}
