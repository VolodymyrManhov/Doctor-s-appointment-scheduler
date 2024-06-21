// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*������ ����� :
1) ��� 
2) ճ����
3) ���������
4) ����������
5) ��������
6) ������*/


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
        cout << "1) ˳���" << endl;
        cout << "2) �볺��" << endl;
        cout << "3) �����������" << endl;
        cout << "4) �����" << endl;

        cin >> choice;

        if (choice == 1) {

            cout << "������ ��� ������..." << endl;
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "������ ������������." << endl;
                auth_status = true;
                menuDoctor();
                // ���� �����
            }
            else cout << "������ �������..." << endl;

        }     

        if (choice == 2) {
            auth_status = true;
            bool choice;
            cout << "������ ��������������?(1 or 0)" << endl;
            cin >> choice;

            if (1) {
\
                menuClient();
                // ���� ������
            }
            else return 0;
                    
        }
       
        if (choice == 3) {

            cout << "������ ��� ������..." << endl;
            int password;
            int true_password = 228;
            cin >> password;

            if (true_password == password) {
                cout << "������ ������������." << endl;
                auth_status = true;
                menuAdmin();
                // ������� ���� ���� 
            }
            else cout << "������ �������..." << endl;

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

        cout << "1) ����� �� ������ �� �����" << endl;
        cout << "2) ���������� ��� ������" << endl;
        cout << "3) �����" << endl;

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
            cout << "������ ������� �� ����" << endl;
        }


        
    }
   
}

void menuDoctor() {

    int choice;
    bool menu_status = 1;

    while (menu_status = 1) {
        cout << "1) ������ �볺���" << endl;
        cout << "2) ������ �볺��� � ������" << endl;
        cout << "3) ������ �� ���������" << endl;
        cout << "4) ������ �볺���" << endl;
        cout << "4) �����" << endl;

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
            cout << "������ ������� �� ����" << endl;
        }

    }
}

void menuAdmin() {
    
    int choice;
    bool menu_admin = true;
    
    while (menu_admin == true) {
       
        cout << "1) ���������� ��� �����" << endl;
        cout << "2) ���������� ��� �볺���" << endl;
        cout << "3) ������ ��� ��� �����" << endl;
        cout << "4) ������ ��� ��� �볺���" << endl;      
        cout << "5) �����" << endl;

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
                cout << "������ ������� �� ����" << endl;
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

        cout << "1) ������ ��������������" << endl;
        cout << "2) �����" << endl;
       
        cin >> choice;
       
        switch (choice) {
        case 1:
            cout << "���" << endl;
            
            break;
        case 2:
            cout << "�����" << endl;
            break;
        default:
            cout << "������ ������� �� ����" << endl;

        }
    }


}