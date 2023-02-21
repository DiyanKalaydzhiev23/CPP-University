#include "Student.h"
#include <iostream>
#include <cstring>

Student::Student() {
    name = new char [2];
    name = " ";
    grade = 2;
}

Student::Student(char* n, double g){
    name = new char[strlen(n)+1];
    strcpy(name, n);
    if(g>=2 && g<=6) grade = g;
    else if(g<2) grade = 2;
    else grade = 6;
}

void Student::read(){
    std::cout << "Въведете име на студент: ";
    name = new char[256];
    std::cin.getline(name, 255);
    std::cout << "Въведете успех на студент: ";
    do{
        std::cin >> grade;
    }while (grade < 2 || grade > 6);
    std::cin.ignore();
}

void Student::setName(char * n){
    name = new char[strlen(n)+1];
    strcpy(name, n);
}

void Student::setGrade(double g){
    if(g>=2 && g<=6) grade = g;
    else if(g<2) grade = 2;
    else grade = 6;
}

bool Student::is_better_than(Student s) const{
    if(grade > s.grade) return true;
    return false;
}

void Student::print() const{
    std::cout << "Име на студент: " << name << std::endl;
    std::cout << "Среден успех на студент: " << grade << std::endl;
}

char * Student::getName() const{
    return name;
}

double Student::getGrade() const{
    return grade;
}
