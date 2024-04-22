#pragma once
#include <iostream>

class Patien
{
private:
    char name[20];
    char disease[40];
    int age;
public:
    void Show();
    int SetDisease();
    int SetAge();
    int SetName();
};