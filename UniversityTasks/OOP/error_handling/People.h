#ifndef ERROR_HANDLING_PEOPLE_H
#define ERROR_HANDLING_PEOPLE_H

#include <iostream>

class People {
    friend std::ostream &operator<<(std::ostream &, const People &);

    friend std::istream &operator>>(std::istream &, People &);

public:
    explicit People(char * = "No Name", char * = "No EGN");

    People(const People &);

    ~People();

    void set_name(char *);

    void set_egn(char *);

    virtual char *get_name() const;

    virtual char *get_egn() const;

    virtual void print() const;

private:
    char *name;
    char *egn;
};


#endif //ERROR_HANDLING_PEOPLE_H
