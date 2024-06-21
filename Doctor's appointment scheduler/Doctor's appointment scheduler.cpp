// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Список лікарів :
1) Лор 
2) Хірург
3) Проктолог
4) Дерматолог
5) Психолог
6) Педіатр*/


#include <iostream>
#include <cstring>
#include <fstream>
#include "Patient.h"
#include "Doctor.h"
#include <windows.h>
#include <vector>

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
                // меню лікаря
            }
            else cout << "Пароль невірний..." << endl;

        }     

        if (choice == 2) {
            auth_status = true;
            bool choice;
            cout << "Бажаєте зареєструватися?(1 or 0)" << endl;
            cin >> choice;

            if (1) {
\
                menuClient();
                // меню кліента
            }
            else return 0;
                    
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


void menuClient() {

    int choice;
    bool menu_status = 1;

    while (menu_status = 1) {

        cout << "1) Запис на прийом до лікаря" << endl;
        cout << "2) Інформація про лікарню" << endl;
        cout << "3) Вийти" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            registration();
            break;
        case 2:
            cout << "Info place :)" << endl;
            break;
        case 3:
            menu_status = 0;
            break;
        default:
            cout << "Такого варіанта не існує" << endl;
        }


        
    }
   
}

void menuDoctor() {

    int choice;
    bool menu_status = 1;

    while (menu_status = 1) {
        cout << "1) Список клієнтів" << endl;
        cout << "2) Внести клієнта в список" << endl;
        cout << "3) Записи на приймання" << endl;
        cout << "4) Картка клієнта" << endl;
        cout << "4) Вийти" << endl;

        cin >> choice;

        switch (choice) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
        case 4:
            cout << "4" << endl;
            break;
        case 5:
            cout << "5" << endl;
            break;
        default:
            cout << "Такого варіанта не існує" << endl;
        }

    }
}

void menuAdmin() {
    
    int choice;
    bool menu_admin = true;
    
    while (menu_admin == true) {
       
        cout << "1) Інформація про лікарів" << endl;
        cout << "2) Інформація про клієнтів" << endl;
        cout << "3) Змінити дані про лікаря" << endl;
        cout << "4) Змінити двні про клієнта" << endl;      
        cout << "5) Вийти" << endl;

        cin >> choice;
        switch (choice){
            case 1:
                cout << "1" << endl;
                break;
            case 2: 
                cout << "2" << endl;
                break;
            case 3: 
                cout << "3" << endl;
                break;
            case 4: 
                cout << "4" << endl;
                break;
            case 5:
                cout << "5" << endl;
                break;
            default:
                cout << "Такого варіанта не існує" << endl;
        }
    }
};

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

void registration() {

    int choice;
    bool menu_registration = true;

    while (menu_registration == true) {

        cout << "1) Бажаєте зареєструватися" << endl;
        cout << "2) Вийти" << endl;
       
        cin >> choice;
       
        switch (choice) {
        case 1:
            cout << "Так" << endl;
            
            break;
        case 2:
            cout << "Вийти" << endl;
            break;
        default:
            cout << "Такого варіанта не існує" << endl;

        }
    }


}