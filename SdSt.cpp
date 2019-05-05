#include <iostream>
#include "Student.h"
#include "Starosta.h"

using namespace std;

void Student::input()
{
    cout << "Введите имя студента: ";
    cin >> name;
    cout << "Введите фамилию студента: ";
    cin >> surname;
    cout << "Введите номер группы студента: ";
    cin >> group;
}
void Student::output()
{
    cout << "Имя студента: " << name << endl;
    cout << "Фамилия студента: " << surname << endl;
    cout << "Номер группы студента: " << group << endl;
}

void Starosta::status()
{
    cout << "Староста" << endl;
}

void Starosta::input()
{
    Student::input();
    cout << "Введите возраст старосты: ";
    cin >> age;
    cout << "Введите email старосты: ";
    cin >> mail;
}

void Starosta::output()
{
    Student::output();
    cout << "Возраст старосты: " << age << endl;
    cout << "Email старосты: " << mail << endl;



}

