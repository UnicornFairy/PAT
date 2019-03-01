/*2-4 按要求格式输出输入的数据
从键盘输入3个实数，按输出格式输出它们的值。
输入格式:
在一行中输入3个实数，之间用空格分隔。
输出格式:
第一行分别输出三个变量的值，保留3位小数，用逗号分隔；
第二行以科学计数法的格式输出第一个变量的值，尾数保留3位小数；
第三行分别输出三个变量的小数值，每个变量的宽度为10个字符，保留4位小数，左对齐，用‘#’填充，用逗号分隔。
输入样例:
123.456789 3.1415926 3214.6789
输出样例:
123.457,3.142,3214.679
1.235e+002
123.4568##,3.1416####,3214.6789#
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3) << a << ',' << b << ',' << c << endl;
    cout << fixed << setprecision(3) << scientific << a << endl;
    cout << fixed << left << setfill('#')<< setprecision(4) << setw(10) << a << ',' << setw(10) << b << ',' << setw(10)<< c << endl;
    return 0;
}
