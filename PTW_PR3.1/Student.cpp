#include <iostream>
#include <string>
#include <iomanip>
#include "Student.hpp"

using namespace std;

void Create(Student* s, int student) {
    int sp;
    for (int i = 0; i < student; i++) {
        cout << "Прiзвище: ";
        cin >> s[i].name;
        cout << "Курс: ";
        cin >> s[i].curs;
        cout << "Спецiальнiсть (0 - Комп'ютернi науки(КН), 1 - Iнформатика(І), 2 - Математика та економiка(МЕ), 3 - Фiзика та iнформатика(ФІ), 4 - Трудове навчання(ТН)): ";
        cin >> sp;
        s[i].speciality = (Speciality)sp;
        cout << "Оцiнка з фiзики: ";
        cin >> s[i].physics;
        cout << "Оцiнка з математики: ";
        cin >> s[i].math;
        if (s[i].speciality == 0) {
            cout << "Оцiнка з програмування: ";
            cin >> s[i].programming;
        }
        else if (s[i].speciality == 1) {
            cout << "Оцiнка з чисельних методiв: ";
            cin >> s[i].numbers;
        }
        else {
            cout << "Оцiнка з педагогiки: ";
            cin >> s[i].pedagogic;
        }
    }
}

void Print(Student* s, int student)
{
    cout << "=========================================================================================================================="
        << endl;
    cout << "| № |    Прiзвище   | Курс | Спецiальнiсть | Фiзика | Математика | Програмування | Чисельнi методи | Педагогiка |"
        << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------"
        << endl;
    for (int i = 0; i < student; i++) {

        cout << "| " << setw(2) << right << i + 1 << "";
        cout << "| " << setw(22) << left << s[i].name
        << "| " << setw(5) << right << s[i].curs;
        int str1 = s[i].speciality;
        cout << "| " << setw(15) << left << strSpeciality[str1]
            << "| " << setw(7) << right << s[i].physics
            << "| " << setw(11) << right << s[i].math;
        if (s[i].speciality == 0) {
            cout << "| " << setw(14) << right << s[i].programming
                << "| " << setw(16) << right << " "
                << "| " << setw(11) << right << " " << "| ";
        }
        else if (s[i].speciality == 1) {
            cout << "| " << setw(14) << right << " "
                << "| " << setw(16) << right << s[i].numbers
                << "| " << setw(11) << right << " " << "| ";
        }
        else {
            cout << "| " << setw(14) << right << " "
                << "| " << setw(16) << right << " "
                << "| " << setw(11) << right << s[i].pedagogic << "| ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------------"
        << endl;
}

double physicsAverage(Student* s, int student) {
    int count = 0;
    double average = 0;
    for (int i = 0; i < student; i++) {
        count += 1;
        average += s[i].physics;
    }
    average = average / count;
    return average;
};

double mathAverage(Student* s, int student) {
    int count = 0;
    double average = 0;
    for (int i = 0; i < student; i++) {
        count += 1;
        average += s[i].math;
    }
    average = average / count;
    return average;
}

double programmingAverage(Student* s, int student) {
    int count = 0;
    double average = 0;
    for(int i = 0; i < student; i++)
    {
        if(s[i].speciality == 0)
        {
            count += 1;
            average += s[i].programming;
        }
    }
    if(count == 0)
    {
        count = 1;
    }
    average = average / count;
    return average;
}

double numbersAverage(Student* s, int student) {
    int count = 0;
    double average = 0;
    for(int i = 0; i < student; i++)
    {
        if(s[i].speciality != 0 && s[i].speciality == 1)
        {
            count += 1;
            average += s[i].numbers;
        }
    }
    if(count == 0)
    {
        count = 1;
    }
    average = average / count;
    return average;
}

double pedagogicAverage(Student* s, int student) {
    int count = 0;
    double average = 0;
    for(int i = 0; i < student; i++)
    {
        if(s[i].speciality != 0 && s[i].speciality != 1)
        {
            count += 1;
            average += s[i].pedagogic;
        }
    }
    if(count == 0)
    {
        count = 1;
    }
    average = average / count;
    return average;
}

int fiveOrfourPysics(Student* s, int student) {
    int count = 0;
    for (int i = 0; i < student; i++) {
        if (s[i].physics == 5 || s[i].physics == 4) {
            count += 1;
        }
    }
    return count;
}
