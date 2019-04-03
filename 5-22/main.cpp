/*7-22 以‘#’结束的字符串中每种数字字符的个数和其它字符的个数
统计从键盘上输入的以‘#’结束的字符串中每种数字字符的个数和其它字符的个数
输入格式:

在一行中输入以‘#’结束的若干个字符。不要出现换行符，空格，制表符。
输出格式:

在一行中按照“digiter=各个数字字符个数”顺序输出，每个个数值输出占2列。 在下一行中按照“other=其它字符个数”顺序输出，其它字符个数原样输出，没有列宽控制。
输入样例:

232235fg#
输出样例:

digiter= 0 0 3 2 0 1 0 0 0 0
other=2
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a[10] = {0}, other = 0;
    char x;
    cin >> x;
    for (; x != '#'; cin >> x) {
        if ((int) x >= 48 && x <= 57) {
            switch ((int) x - 48) {
                case 0:
                    a[0] += 1;
                    break;
                case 1:
                    a[1] += 1;
                    break;
                case 2:
                    a[2] += 1;
                    break;
                case 3:
                    a[3] += 1;
                    break;
                case 4:
                    a[4] += 1;
                    break;
                case 5:
                    a[5] += 1;
                    break;
                case 6:
                    a[6] += 1;
                    break;
                case 7:
                    a[7] += 1;
                    break;
                case 8:
                    a[8] += 1;
                    break;
                case 9:
                    a[9] += 1;
                    break;
            }
        } else {
            other++;
        }
    }
    cout << "digiter=";
    for (int i = 0; i < 10; i++) {
        cout << setw(2) << a[i];
    }
    cout << endl;
    cout << "other=" << other << endl;
    cout << ('a'== 97) ;
    return 0;
}