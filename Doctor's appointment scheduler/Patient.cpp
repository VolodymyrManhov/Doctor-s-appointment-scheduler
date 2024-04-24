#include "Patient.h"

Patient::Patient()
	:name{ "none" }, disease{ "none" }, age{ 0 } {}

Patient::Patient(std::string new_name)
	:name{ new_name }, disease{ "none" }, age{ 0 } {}


Patient::Patient(std::string new_name ,std::string new_disease)
	:name{ new_name }, disease{ new_disease }, age{ 0 } {}


Patient::Patient(std::string new_name, std::string new_disease, int new_age)
	:name{ new_name }, disease{ new_disease }, age{ new_age } {}


Patient::~Patient()
{
}
