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
    
    ~Doctor();
};
