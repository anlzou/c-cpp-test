/***
 * @Date        : 2020-05-10 20:16:40
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-10 20:16:58
 * @FilePath    : \c-cpp\arithmetic\mytest\josephAliveDeadGames.cpp
 * @Describe    :
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int count = 0;     //记录下船的人数 ，到15就终止程序
    int a[100] = {0};  //储存30人信息，0代表在船上，1代表下船了
    int i = 0;         //循环索引
    int c = 0;  // 记录报数号码，到9就清零，由下一位重新报数
    int allPersion = 0;
    int unluckNumber = 0;
    int persionOut = 0;
    cout << "Input a all number:";
    cin >> unluckNumber;
    cout << "Input a unlunck number:";
    cin >> unluckNumber;
    cout << "Input a persion out number:";
    cin >> persionOut;

    while (1) {
        if (a[i] == 0) c++;  //记录报数号码
        if (c == unluckNumber) {
            count++;   //下船人数加一
            a[i] = 1;  //标记这个人下船了
            cout << "The number:" << setw(3) << i + 1
                 << " is get out of the boat." << endl;
            c = 0;  //到9就清零，由下一位从0重新报数
        }
        if (count == persionOut) break;  //下船的人数到15就终止程序
        i++;                             //分析下一个人
        if (i == allPersion) i = 0;  //将数组变成一个圈，循环往复
    }
    getchar();
    getchar();
    return 0;
}