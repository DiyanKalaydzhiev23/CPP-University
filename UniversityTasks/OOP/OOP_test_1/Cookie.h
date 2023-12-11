#ifndef OOP_TEST_1_COOKIE_H
#define OOP_TEST_1_COOKIE_H


class Cookie {

    public:
        Cookie();
        Cookie(int percentSugar, bool isBaked, char * flour);

        ~Cookie();

        int getPercentSugar() const;
        bool getIsBaked() const;
        const char * getFlourType() const;

        int setPercentSugar(int percentSugar);
        bool setIsBaked(bool isBaked);
        const char * setFlourType(const char * flour);

        Cookie operator +(int sugar);

        virtual void print();

    protected:
        bool isBaked;

    private:
        int percentSugar;
        char *flour;
};


#endif //OOP_TEST_1_COOKIE_H
