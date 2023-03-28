#ifndef ERROR_HANDLING_STUDENT_H
#define ERROR_HANDLING_STUDENT_H

#include "People.h"

class Student : public People {
    friend std::ostream &operator<<(std::ostream &, const Student &);

    friend std::istream &operator>>(std::istream &, Student &);

public:
    explicit Student(char * = "No Name", char * = "No EGN", char * = "No Faculty Number", double = 2.);

    Student(const Student &);

    ~Student();

    void set_fnum(char *);

    void set_grade(double);

    virtual char *get_name() const;

    virtual char *get_egn() const;

    char *get_fnum() const;

    double get_grade() const;

    virtual void print() const;

private:
    char *fnum;
    double grade;
};


std::ostream &operator<<(std::ostream &, const People &);

std::istream &operator>>(std::istream &, People &);

std::ostream &operator<<(std::ostream &, const Student &);

std::istream &operator>>(std::istream &, Student &);


#endif //ERROR_HANDLING_STUDENT_H
