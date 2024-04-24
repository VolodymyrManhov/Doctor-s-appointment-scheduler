#pragma once
#include <iostream>
#include <iostream>

class Doctor
{
private:
    std::string name;
    std::string speciality;
    int age;
    std::string workingDay;
    std::string workingTime;
public:
    double getAge() { return age; }  
 

    Doctor();   
    Doctor(std::string new_name);
    Doctor(std::string new_name, std::string new_speciality);
    Doctor(std::string new_name, std::string new_speciality, int new_age);
    Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay);
    Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay, std::string new_workingTime);
    ~Doctor();
};
