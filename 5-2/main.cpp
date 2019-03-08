/*7-2 打印直角九九乘法表 （10 分）
输出直角九九乘法口诀，输出效果如样例。
输出格式:
以左下直角的格式输出九九乘法表，每个式子按“a*b=c”形式输出，其中a和b各占1位列宽，c占3位列宽并左对齐。
输出样例:
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for(int i = 1; i <= 9; i++){    //控制横-行
        for(int j = 1; j <= i; j++){     //控制纵-列
            cout << i << "*" << j << "=" << setw(3) << setfill(' ') << left << i * j;
            if(i == j){
                cout << "\n";
            }
        }
    }
    return 0;
}