#include "Student.h"
#include "Starosta.h"
#include "Alive.h"
#include "Bird.h"
#include "Fish.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Student st;
    cout << "Введите информацию о студенте:" << endl;
    st.input();
    cout << "Студент:" << endl;
    st.output();

    Starosta ch;
    cout << "Введите информацию о старосте:" << endl;
    ch.input();
    ch.status();
    ch.output();

    ////////////////////////

    Bird p;
    Fish f;
    Animal zh;
    p.vid();
    p.input();
    p.output();
    f.vid();
    f.input();
    f.output();
    zh.vid();
    zh.input();
    zh.output();

    //////////////////////


    Dog d;
    Cat c;
    d.vid();
    d.input();
    d.output();
    c.vid();
    c.input();
    c.output();

    return 0;
}