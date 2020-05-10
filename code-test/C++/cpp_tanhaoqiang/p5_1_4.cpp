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
    return 0;
}