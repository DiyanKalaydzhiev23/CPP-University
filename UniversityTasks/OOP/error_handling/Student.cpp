#include "Student.h"

#include <cstring>
#include <cassert>

using std::strlen;
using std::invalid_argument;

Student::Student(char *n, char *e, char *f, double g) : People(n, e) {
    fnum = new char[strlen(f) + 1];

    if (fnum != NULL) {
        throw invalid_argument("Student number cannot be null");
    }

    strcpy_s(fnum, strlen(f) + 1, f);

    if (g >= 2 && g <= 6) grade = g;
    else if (g < 2) grade = 2;
    else grade = 6;
}

Student::Student(const Student &s) : People(s) {
    std::cout << "Student(const & )\n";

    fnum = new char[strlen(s.fnum) + 1];

    if (fnum != NULL) {
        throw invalid_argument("Student number cannot be null");
    }
    strcpy_s(fnum, strlen(s.fnum) + 1, s.fnum);

    grade = s.grade;
}

Student::~Student() {
    delete[] fnum;
}

void Student::set_fnum(char *f) {
    if (fnum != NULL) delete[] fnum;
    fnum = new char[strlen(f) + 1];
    assert(fnum != NULL);
    strcpy_s(fnum, strlen(f) + 1, f);

}

void Student::set_grade(double g) {
    if (g >= 2 && g <= 6) grade = g;
    else if (g < 2) grade = 2;
    else grade = 6;

}

char *Student::get_name() const {
    std::cout << "Student's name:";
    return People::get_name();
}

char *Student::get_egn() const {
    std::cout << "Student's EGN:";
    return People::get_egn();
}

char *Student::get_fnum() const {
    return fnum;

}

double Student::get_grade() const {
    return grade;

}

void Student::print() const {
    People::print();
    std::cout << "Faculty number: " << fnum << std::endl;
    std::cout << "Grade: " << grade << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Student &s) {
    out << "Name: " << s.get_name() << " EGN: " << s.get_egn() << std::endl
        << " Faculty number: " << s.fnum << " Grade: " << s.grade << std::endl;
    return out;
}

std::istream &operator>>(std::istream &in, Student &s) {
    char *tname;
    char *teng;
    in >> tname >> teng;

    s.set_name(tname);
    s.set_egn(teng);
    in >> s.fnum >> s.grade;

    return in;
}
