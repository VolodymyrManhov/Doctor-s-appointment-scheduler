// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Patient.h"
#include "Doctor.h"
#include <windows.h>

using namespace std;



void showAll(Doctor doctor, Patient patient)
{
    std::cout << "docs" << std::endl;
    std::cout << "Age is: " << doctor.getAge() << std::endl;
    std::cout << "Working day is: " << doctor.getWorkingDay() << std::endl;
    std::cout << "Working time is: " << doctor.getWorkingTime() << std::endl;
    std::cout << "Speciality is: " << doctor.getSpeciality() << std::endl;
    std::cout << "Name is: " << doctor.getName() << std::endl << std::endl;

    std::cout << "patients"<< std::endl;
    std::cout << "Age is: " << patient.getAge() << std::endl;
    std::cout << "Name is: " << patient.getName() << std::endl;
    std::cout << "Disease is: " << patient.getDisease() << std::endl << std::endl;
}



void showPatient(Patient patient)
{

    std::cout << "Age is: " << patient.getAge() << std::endl;
    std::cout << "Name is: " << patient.getName() << std::endl;
    std::cout << "Disease is: " << patient.getDisease() << std::endl;
}

void showDoctor(Doctor doctor)
{

    std::cout << "docs" << std::endl;
    std::cout << "Age is: " << doctor.getAge() << std::endl;
    std::cout << "Working day is: " << doctor.getWorkingDay() << std::endl;
    std::cout << "Working time is: " << doctor.getWorkingTime() << std::endl;
    std::cout << "Speciality is: " << doctor.getSpeciality() << std::endl;
    std::cout << "Name is: " << doctor.getName() << std::endl << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    Doctor abubachir;
    Doctor farsad("LOR", "aboba", 20);
    Patient salat("Jaba", "gustafo fringo", 2);
    showAll(farsad, salat);
    

    return 0;
};

