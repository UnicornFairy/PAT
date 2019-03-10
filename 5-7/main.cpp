/*7-7 输出三角形字符阵列
本题要求编写程序，输出n行由大写字母A开始构成的三角形字符阵列。
输入格式：
输入在一行中给出一个正整数n（1≤n<7）。
输出格式：
输出n行由大写字母A开始构成的三角形字符阵列。格式见输出样例，其中每个字母后面都有一个空格。
输入样例：
4
输出样例：
A B C D
E F G
H I
J
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    for(char i = 'A'; n > 0; i++){
            cout << i << setw(2);
            count++;
            if(count == n){
                cout << "\n";
                n--;
                count = 0;
            }
    }
    return 0;
}