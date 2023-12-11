#include <iostream>
#include <cstring>
#include <vector>



using namespace std;


struct Student {
    string student_number;
    string student_name;
    float avg_grade;
};


void enter_students_data(vector<Student> &students) {
    Student student;
    char command = 'y';

    while (command != 'n') {
        cout << "Enter a student number: ";
        cin >> student.student_number;

        cout << "Enter the student's name: ";
        cin >> student.student_name;

        cout << "Enter the student's average grade: ";
        cin >> student.avg_grade;

        students.push_back(student);

        cout << "Do you want to add more? [y/n]: ";
        cin >> command;
    }
}

// jk
void print_the_geeks(vector<Student> &students) {
    for (auto &student : students) {
        if (student.avg_grade >= 5.50) {
            cout << student.student_name << endl;
        }
    }
}


int get_poor_grade_students_count(vector<Student> &students) {
    int count = 0;

    for (auto &student : students) {
        if (student.avg_grade < 3) {
            count += 1;
        }
    }

    return count;
}

float get_average_grade_of_the_course(vector<Student> &students) {
    float average_grade_sum = 0;

    for (auto &student : students) {
        average_grade_sum += student.avg_grade;
    }

    return average_grade_sum / (float)students.size();
}

void print_student(Student &student) {
    cout << "The student number: " << student.student_number << endl;
    cout << "The name of the student: " << student.student_name << endl;
    cout << "The average grade: " << student.avg_grade << endl;
}

void print_student_by_student_number(vector<Student> &students, string &student_number) {
    for (auto &student : students) {
        if (student.student_number == student_number) {
            print_student(student);
            break;
        }
    }
}

void print_student_by_index(vector<Student> &students, int index) {
    Student student = students[index];

    print_student(student);
}


void get_student_by_selector(vector<Student> &students) {
    char selector;

    cout << "Enter a selector: [i/n]";
    cin >> selector;

    if (selector == 'i') {
        int index;

        cout << "Enter index: ";
        cin >> index;

        print_student_by_index(students, index);
    } else if (selector == 'n') {
        string student_number;

        cout << "Enter the student number: ";
        cin >> student_number;

        print_student_by_student_number(students, student_number);
    }
}

void print_all_students(vector<Student> &students) {
    for (auto &student : students) {
        print_student(student);
    }
}

int main() {
    vector<Student> students;
    char command = '.';

    while (command != '0') {
        cout << "Enter a command [1-6]:";
        cin >> command;

        if (command == '1') {
            enter_students_data(students);
        } else if (command == '2') {
            print_the_geeks(students);
        } else if (command == '3') {
            cout << "Count: " << get_poor_grade_students_count(students);
        } else if (command == '4') {
            cout << "Average count" <<  get_average_grade_of_the_course(students);
        } else if (command == '5') {
            print_all_students(students);
        } else if (command == '6') {
            get_student_by_selector(students);
        }
    }

    return 0;
}
