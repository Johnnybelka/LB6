#include "Student.h"

class Starosta : public Student
{
protected:
    int age;
    char mail[20];
public:
    void status();
    void input();
    void output();
};
