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
    std::string getName() { return name; }
    std::string getDisease() { return disease; }

    void setInfo(std::string name, std::string disease, int age) {
       
        this->name = name;
        this->age = age;
        this->disease = disease;

    }
    
    Patient();
    Patient(std::string new_name);
    Patient(std::string new_name, std::string new_disease);
    Patient(std::string new_name, std::string new_disease, int new_age);
    
    ~Patient();
};
