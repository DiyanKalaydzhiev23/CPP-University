#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
    Student(); // конструктор по подразибране
    Student(char*, double); // конструктор с параметри
    void read();
    void setName(char * name); // мутатор
    void setGrade(double grade); // мутатор
    bool is_better_than(Student s) const; // аксесор
    void print() const;
    char * getName() const; // аксесор
    double getGrade() const;
private:
    char * name;
    double grade;
};

#endif
