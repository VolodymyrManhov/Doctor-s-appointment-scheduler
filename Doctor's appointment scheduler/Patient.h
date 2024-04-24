#pragma once
#include <iostream>
#include <string>

class Patient
{
private:
    std::string name;
    std::string disease;
    int age;  
public:
    double getAge() { return age; }

    void showAll(std::string new_name, std::string new_disease, int new_age);

    Patient();
    Patient(std::string new_name);
    Patient(std::string new_disease, int new_age);
    Patient(std::string new_name, std::string new_disease, int new_age); 
    ~Patient();
};
