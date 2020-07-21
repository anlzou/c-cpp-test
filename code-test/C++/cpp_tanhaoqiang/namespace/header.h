/*** 
 * @Date        : 2020-07-21 16:52:50
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-07-21 17:00:45
 * @FilePath    : \c-cpp\code-test\C++\cpp_tanhaoqiang\namespace\header.h
 * @Describe    : 
 */
#include <iostream>
using namespace std;
namespace anlzou{
    void fun1(){
        std::cout<<"this is anlzou namespace test.";    
    }
}

namespace test{
    void fun1(){
        std::cout<<"this is test namespace test.";    
    }
}