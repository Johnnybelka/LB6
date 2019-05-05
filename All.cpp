#include <iostream>
#include "Alive.h"
#include "Bird.h"
#include "Fish.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

void Alive::input()
{
    cout << "Введите кличку: ";
    cin >> name;
    cout << "Введите дополнительную информацию: ";
    cin >>  info;
}
void Alive::output()
{
    cout << "Кличка: " << name << endl;
    cout << "Информация: " << info << endl;
}

void Bird::vid()
{
    cout << "Птица" << endl;
}

void Bird::input()
{
    Alive::input();
    cout << "Введите матрик обитания: ";
    cin >> materic;
}

void Bird::output()
{
    Alive::output();
    cout << "Материк: " << materic << endl;
}

void Fish::vid()
{
    cout << "Рыба" << endl;
}

void Fish::input()
{
    Alive::input();
    cout << "Введите реку обитания: ";
    cin >> river;
}

void Fish::output()
{
    Alive::output();
    cout << "Река: " << river << endl;
}

void Animal::vid()
{
    cout << "Животное" << endl;
}

void Animal::input()
{
    Alive::input();
    cout << "Введите страну обитания: ";
    cin >> country;
}

void Animal::output()
{
    Alive::output();
    cout << "Страна: " << country << endl;
}

void Dog::input()
{
    Animal::input();
    cout << "Введите породу: ";
    cin >> poroda;
}

void Dog::output()
{
    Animal::output();
    cout << "Порода: " << poroda << endl;
}

void Cat::input()
{
    Animal::input();
    cout << "Введите породу: ";
    cin >> poroda;
}

void Cat::output()
{
    Animal::output();
    cout << "Порода: " << poroda << endl;
}

void Dog::vid()
{
    cout << "Собака" << endl;
}

void Cat::vid()
{
    cout << "Кот" << endl;
}

