#include <iostream>
#include "Doctor.h"

Doctor::Doctor()
	:name{ "none" }, speciality{ "none" }, age{ 0 }, workingDay{ "none" }, workingTime{ "none" } {}

Doctor::Doctor(std::string new_name)
	:name{ new_name }, speciality{ "none" }, age{ 0 }, workingDay{ "none" }, workingTime{ "none" } {}

Doctor::Doctor(std::string new_name, std::string new_speciality)
	:name{ new_name }, speciality{ new_speciality }, age{ 0 }, workingDay{ "none" }, workingTime{ "none" } {}

Doctor::Doctor(std::string new_name, std::string new_speciality, int new_age)
	:name{ new_name }, speciality{ new_speciality }, age{ new_age }, workingDay{ "none" }, workingTime{ "none" } {}

Doctor::Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay)
	:name{ new_name }, speciality{ new_speciality }, age{ new_age }, workingDay{ new_workingDay }, workingTime{ "none" } {}

Doctor::Doctor(std::string new_name, std::string new_speciality, int new_age, std::string new_workingDay, std::string new_workingTime)
	:name{ new_name }, speciality{ new_speciality }, age{ new_age }, workingDay{ new_workingDay }, workingTime{ new_workingTime } {}

Doctor::~Doctor()
{
}
