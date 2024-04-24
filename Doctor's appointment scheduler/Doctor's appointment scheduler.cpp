// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Patient.h"
#include "Doctor.h"
#include <windows.h>

using namespace std;

void Show(Doctor& doctor);

void showAge(Doctor doctor)
{

    std::cout << "Age is: " << doctor.getAge() << std::endl;

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    Doctor abubachir;
    Doctor farsad("2", "aboba", 20);
   
    showAge(farsad);


    return 0;
};

void Show(Doctor& doctor)
{

}