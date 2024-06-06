#pragma once
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
    std::string getName() { return name; }
    std::string getWorkingDay() { return workingDay; }
    std::string getWorkingTime() { return workingTime; }
    std::string getSpeciality() { return speciality; }
    
    Doctor();   
    Doctor(std::string new_name);
    Doctor(std::string new_name, std::string new_speciality);
    Doctor(std::string new_name, std::string new_speciality, int new_age);
    Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay);
    Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay, std::string new_workingTime);
    ~Doctor();
};
