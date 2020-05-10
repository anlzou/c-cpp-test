/***
 * @Date        : 2020-05-10 09:09:28
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-10 16:22:14
 * @FilePath    : \c-cpp\code-test\C++\cpp_tanhaoqiang\p5_1_4.cpp
 * @Describe    :
 */
#include <string.h>

#include <iostream>
using namespace std;

class Student {
   private:
    string name;
    int num;
    int score;

   public:
    void setDate() {
        cout << "name:";
        cin >> name;
        cout << "num:";
        cin >> num;
        cout << "score:";
        cin >> score;
    }
    void display() {
        cout << "name=" << name << endl;
        cout << "num=" << num << endl;
        cout << "score=" << score << endl;
    }
};
// Student::~Student() { cout << "finish, byby." << endl; }

int main() {
    Student student1, student2;
    student1.setDate();
    student1.display();
    getchar();
    getchar();
    return 0;
}