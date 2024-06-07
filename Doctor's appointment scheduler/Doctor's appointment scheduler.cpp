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

void registration();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    int choice;
    bool auth_status = false;
    
    while (auth_status == false) {
        cout << "1) Лікар" << endl;
        cout << "2) Клієнт" << endl;
        cout << "3) Адміністратор" << endl;
        cout << "4) Вийти" << endl;

        cin >> choice;

        if (choice == 1) {

            cout << "Введіть свій пароль..." << endl;
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "Пароль підтвержденно." << endl;
                auth_status = true;
                menuDoctor();
                // функція меню лікаря
            }
            else cout << "Пароль невірний..." << endl;

        }     

        if (choice == 2) {
            auth_status = true;
            int age;
            cout << "Cкільки вам років?" << endl;
            cin >> age;

            if (age > 18) {
               
                cout << "Ви є повнолітньою особою." << endl;
                menuClient();
            }
            else if (age < 18) {
                
                if (age < 0) {

                    cout << "Некоректний вік..." << endl;                   
                    return 0;
                
                }
                if (age < 1) {

                    cout << "Підтримка непоінооітніх пацієнтів нема" << endl;

                }


                cout << "Ви є неповнолітньою особою " << endl;

            
            }                     
        }
       
        if (choice == 3) {

            cout << "Введіть свій пароль..." << endl;
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "Пароль підтвержденно." << endl;
                auth_status = true;
                menuAdmin();
                // функція адмін меню 
            }
            else cout << "Пароль невірний..." << endl;

        }
        
        if (choice == 4) {

            return 0;

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
void menuClient() {
   
        cout << "1) Запис на прийом до лікаря" << endl;
        cout << "2) Інформація про лікарню" << endl;
        cout << "3) " << endl;
        cout << "4) " << endl;
   
}

void menuDoctor() {

        cout << "1) " << endl;
        cout << "2) " << endl;
        cout << "3) " << endl;
        cout << "4) " << endl;

}

void menuAdmin() {

        cout << "1) " << endl;
        cout << "2) " << endl;
        cout << "3) " << endl;
        cout << "4) " << endl;

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

