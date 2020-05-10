/***
 * @Date        : 2020-05-10 21:05:18
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-10 21:05:59
 * @FilePath    : \c-cpp\code-test\C++\cpp_tanhaoqiang\p14_1_3_5.cpp
 * @Describe    :
 */
#include <iostream>
using namespace std;
template <typename T>
T max(T a, T b, T c) {
    int temp = a > b ? a : b;
    return temp > c ? temp : c;
}
int main() {
    int ai = 2, bi = 4, ci = 7;
    float af = 2.3, bf = 5.2, cf = 7.4;
    double ad = 3.3, bd = 4.2, cd = 9.5;
    cout << max(ai, bi, ci) << endl;
    cout << max(af, bf, cf) << endl;
    cout << max(ad, bd, cd) << endl;
    getchar();
    getchar();
    return 0;
}