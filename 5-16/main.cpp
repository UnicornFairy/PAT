/*7-16 打印菱形图形
打印出如下图案（菱形）
   *
  ***
 *****
*******
 *****
  ***
   *
第一行图形符号前面有5个空格
输出格式:

以菱形的格式输出7行由乘号构成的图形，每个乘号占固定1位，第一行乘号前有5个空格。
输出样例:

       *
      ***
     *****
    *******
     *****
      ***
       *
*/
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {     //控制行数
        cout << "     ";
        if (i <= 3) {
            for (int j = 0; j < 3 - i; j++) {
                cout << ' ';
            }
            for (int k = 0; k < 2 * i + 1; k++) {
                cout << '*';
            }
        }
        if (i > 3) {
            for (int j = 0; j < i - 3; j++) {
                cout << ' ';
            }
            for (int k = 0; k < 2 * (6 - i) + 1; k++) {
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}