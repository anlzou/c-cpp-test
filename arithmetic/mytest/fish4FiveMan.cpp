/***
 * @Date        : 2020-05-10 16:27:59
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-10 16:28:37
 * @FilePath    : \c-cpp\arithmetic\mytest\fish4FiveMan.cpp
 * @Describe    :
 * A、B、C、D、E
 * 五人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，于是各自找地方睡觉。
 * 日上三杆，A 第一个醒来，他将鱼分为五份，把多余的一条鱼扔掉，拿走自己的一份。
 * B 第二个醒来，也将鱼分为五份，把多余的一条鱼扔掉拿走自己的一份。
 * C、D、E依次醒来，也按同样的方法拿鱼。
 *
 * 问他们台伙至少捕了多少条鱼?以及每个人醒来时见到了多少鱼？
 *
 * 结果：10156,2031,406,81,16
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, j, k, l, m;  //看到的鱼

    l = 1 + m * 5;  //从后面的人开始
    k = 1 + l * 5;
    j = 1 + k * 5;
    i = 1 + j * 5;
    if (m % 5 == 1 && l % 5 == 1 && k % 5 == 1 && j % 5 == 1 && i % 5 == 1) {
        printf("%d,%d,%d,%d,%d\n", i, j, k, l, m);
    }
    getchar();
    getchar();
    return 0;
}