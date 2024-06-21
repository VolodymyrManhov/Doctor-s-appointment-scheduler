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
    bool status;
    int password;

public:
   
    double getAge() { return age; }  
    std::string getName() { return name; }
    std::string getWorkingDay() { return workingDay; }
    std::string getWorkingTime() { return workingTime; }
    std::string getSpeciality() { return speciality; }
    int getPassword() { return password; }
    bool getStatus() { return status; }

    void setDoctorInfo(std::string name, std::string speciality, int age, std::string workingDay, std::string workingTime, bool status, int password) {
        
        this->name = name;
        this->age = age;
        this->speciality = speciality;
        this->workingDay = workingDay;
        this->workingTime = workingTime;
        this->status = status;
        this->password = password;

    }
    virtual std::string getType() const = 0;

    virtual void saveToFile(std::ofstream& ofs) const {
        //ofs << getType() << "\n" << name << "\n" << age << "\n" << speciality << "\n" << workingDay << "\n" << workingTime << "\n" << password <<  "\n"  << status << "\n";
    }
    
    Doctor() : name(""), speciality(""), age(0), workingDay(""), workingTime(""), status(false), password(0) {}
    virtual ~Doctor() {}

};

class ENT : public Doctor {

    ENT() {
        setDoctorInfo("Default ENT", "ENT", 0, "", "", false, 0);
    }
    ~ENT() {}

};

class Surgeon : public Doctor {

    Surgeon() {
        setDoctorInfo("Default Surgeon", "Surgeon", 0, "", "", false, 0);
    }
    ~Surgeon() {}

};

class Proctologist : public Doctor {

    Proctologist() {
        setDoctorInfo("Default Proctologist", "Proctologist", 0, "", "", false, 0);
    }
    ~Proctologist() {}

};

class Dermatologist : public Doctor {

    Dermatologist() {
        setDoctorInfo("Default Dermatologist", "Dermatologist", 0, "", "", false, 0);
    }
    ~Dermatologist() {}

};

class Psychologist : public Doctor {

    Psychologist() {
        setDoctorInfo("Default Psychologist", "Psychologist", 0, "", "", false, 0);
    }
    ~Psychologist() {}

};

class Pediatrician : public Doctor {

    Pediatrician() {
        setDoctorInfo("Default Pediatrician", "Pediatrician", 0, "", "", false, 0);
    }
    ~Pediatrician() {}

};