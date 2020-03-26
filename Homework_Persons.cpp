#include<iostream>
#include<vector>

class Person{

    private: std :: string name, address;
    public: Person(std :: string name, std :: string address){

        this -> name = name;
        this -> address = address;

    }
    public: std :: string GetName(){ return name; }
    public: std :: string GetAddress(){ return address; }

};

class Employee: public Person{

    private: std :: string company;

    public: Employee(std :: string name, std :: string address, std :: string company):Person(name, address){ this -> company = company; }
    public: std :: string GetCompany() { return company; }

};

class Student: public Person{

    private: std :: string school;
    public: Student(std :: string name, std :: string address, std :: string school): Person(name, address){ this -> school = school; }
    public: std :: string GetSchool() { return school; }

};

class Programmer: public Employee {

    private: std :: string Language;
    public: Programmer(std :: string name, std :: string address, std :: string company, std :: string language): Employee(name, address, company){ Language = language; }
    public: std :: string GetLanguage() { return Language; }

};

class Patient: public Person{

    private: std :: string illness;
    public: Patient(std :: string name, std :: string address, std :: string illness): Person(name, address){ this -> illness = illness; }

};

class Doctor: public Employee {

    private: std :: vector <Person> patients;
    public: Doctor(std :: string name, std :: string address, std :: string company): Employee(name, address, company){ }
    public: void AddPatient(Person p) { patients.push_back(p); }
    void GetPatients() {

        for(int i = 0; i < patients.size(); i++)
            std :: cout << patients[i].GetName() << '\n';

    }

};

int main() {

    Person p ("Ivan", "Haskovo");
    std :: cout << p.GetName() << " " << p.GetAddress() << '\n';
    Employee e ("Angel", "Varna", "VM");
    std :: cout << e.GetName() << " " << e.GetAddress() << " " << e.GetCompany() << '\n';
    Student s("Ani", "Sofia", "SMG");
    std :: cout << s.GetName() << " " << s.GetAddress() << " " << s.GetSchool() << '\n';
    Programmer pr ("Pesho", "Sofia", "ASDA", "C++");
    std :: cout << pr.GetName() << " " << pr.GetAddress() << " " << pr.GetCompany() << " " << pr.GetLanguage() << '\n';
    Doctor dr("Ivanov", "Plovdiv", "Medica");
    dr.AddPatient(p);
    std :: cout << dr.GetName() <<  "  "  << dr.GetAddress() <<  "  "  << dr.GetCompany() << '\n';
    std :: cout << "Patients: \n";
    dr.GetPatients();}
