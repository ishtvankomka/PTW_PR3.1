#include <iostream>
#include <string>
#include <iomanip>
#include "Student.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int student;
    cout << "Кiлькiсть студентiв: ";
    cin >> student;
    Student *s = new Student[student];
    Create(s, student);
    Print(s, student);

    cout << "Середній бал з фiзики: " << physicsAverage(s, student) << endl;
    cout << "Середній бал з математики: " << mathAverage(s, student) << endl;
    cout << "Середній бал з програмування: " << programmingAverage(s, student) << endl;
    cout << "Середній бал з чисельних методiв " << numbersAverage(s, student) << endl;
    cout << "Середній бал з педагогіки " << pedagogicAverage(s, student) << endl;
    cout << "Kiлькiсть студентiв, якi отримали з фiзики оцінки «4» або «5»: " << fiveOrfourPysics(s, student) << endl;

    return 0;
}
