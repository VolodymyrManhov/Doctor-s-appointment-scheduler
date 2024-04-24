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

};