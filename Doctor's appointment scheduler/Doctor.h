#pragma once
#include <iostream>

class Doctor
{
private:
    char name[20];
    char specialty[20];
    int age;
    char workingDay;
    char workingTime;
public:
    void Show();
    int SetName();
    int SetSpeciality();
    int SetAge();
    int SetWorkingDay();
    int SetWorkingTime();
};