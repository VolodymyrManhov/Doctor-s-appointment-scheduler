// Doctor's appointment scheduler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

class Doctor
{
private:
    char name[20];
    char specialty[20];
    int time;
    char day[20];

public:
    void ChangeSpecialty(const char* newSpecialty)
    {
        strcpy_s(specialty, 20, newSpecialty);
    }

    void ChangeName(const char* newName)
    {
        strcpy_s(name, 20, newName);
    }
    
    void Show()
    {      
        std::cout << "Name: " << name << std::endl;
        std::cout << "Specialty: " << specialty << std::endl;
    }

    /*void SignUp()
    {
            
    }
    */
   
    void WorkTime()
    {
       
    }
    
    void WorkDay()
    {
         
    }

};

class Patien
{
    char name[20];
    char disease[40];
    int age;

    void ChangeName(const char* newName)
    {
        strcpy_s(name, 20, newName);
    }

    void ChangeDisease(const char* newDisease)
    {
        strcpy_s(disease, 40, newDisease);
    }

    void ChangeAge(int newAge)
    {
        age = newAge;
    }
};

int main()
{
    Doctor oleg;
    Doctor nikita;
    Doctor mariya;

    oleg.ChangeSpecialty("Lor");
    oleg.ChangeName("Oleg_Jopin");

    nikita.ChangeSpecialty("Praktolog");
    nikita.ChangeName("Nikita_Jopin");

    mariya.ChangeSpecialty("Ortodont");
    mariya.ChangeName("Mariya_Hause");
    
    oleg.Show();
    mariya.Show();
    nikita.Show();

    return 0;
};
