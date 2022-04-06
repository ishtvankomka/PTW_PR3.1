#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

enum Speciality{KN, IT, ME, FI, TN};

const string strSpeciality[5] = { "КН", "ІT", "МЕ", "ФІ", "ТН" };

struct Student {
    string name;
    int curs;
    Speciality speciality;
    int physics;
    int math;
    union {
        int programming;
        int numbers;
        int pedagogic;
    };
};

void Create(Student*, int);
void Print(Student*, int);
double physicsAverage(Student*, int);
double mathAverage(Student*, int);
double programmingAverage(Student*, int);
double numbersAverage(Student*, int);
double pedagogicAverage(Student*, int);
int fiveOrfourPysics(Student*, int);
