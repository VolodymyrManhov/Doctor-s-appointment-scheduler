// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Patient.h"
#include "Doctor.h"
#include <windows.h>

using namespace std;


void showAll(Doctor doctor, Patient patient);

void showPatient(Patient patient);

void showDoctor(Doctor doctor);

void menuAdmin();

void menuDoctor();

void menuClient();

void clear();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    int choice;
    bool auth_status = false;
    
    while (auth_status == false) {
        cout << "1) я л≥кар" << endl;
        cout << "2) я потребую допомоги" << endl;
        cout << "3) я адм≥н≥стратор" << endl;
        cout << "4) ¬ийти" << endl;

        cin >> choice;

        if (choice == 1) {

            cout << "¬вед≥ть св≥й пароль...";
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "ѕароль п≥дтвержденно.";
                auth_status = true;
                // функц≥€ меню л≥кар€
            }
        }
        else break;

        if (choice == 2) {

            cout << "¬вед≥ть св≥й пароль...";
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "ѕароль п≥дтвержденно.";
                auth_status = true;
                // функц≥€ меню л≥кар€
            }

        }
        if (choice == 3) {

            cout << "¬вед≥ть св≥й пароль...";
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "ѕароль п≥дтвержденно.";
                auth_status = true;
                // функц≥€ меню л≥кар€
            }
            if (choice == 4) {

                return 0;

            }
        }
    }
   
    return 0;
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

void showPatient(Patient patient)
{

    std::cout << "Age is: " << patient.getAge() << std::endl;
    std::cout << "Name is: " << patient.getName() << std::endl;
    std::cout << "Disease is: " << patient.getDisease() << std::endl;
}

void showAll(Doctor doctor, Patient patient)
{
    std::cout << "docs" << std::endl;
    std::cout << "Age is: " << doctor.getAge() << std::endl;
    std::cout << "Working day is: " << doctor.getWorkingDay() << std::endl;
    std::cout << "Working time is: " << doctor.getWorkingTime() << std::endl;
    std::cout << "Speciality is: " << doctor.getSpeciality() << std::endl;
    std::cout << "Name is: " << doctor.getName() << std::endl << std::endl;

    std::cout << "patients" << std::endl;
    std::cout << "Age is: " << patient.getAge() << std::endl;
    std::cout << "Name is: " << patient.getName() << std::endl;
    std::cout << "Disease is: " << patient.getDisease() << std::endl << std::endl;
}
void senuClient() {

    cout << "1";

}

void clear() {
    COORD topLeft = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}