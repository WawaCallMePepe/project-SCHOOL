
#ifndef SCHOOL_PROJECT_HUMAN_H
#define SCHOOL_PROJECT_HUMAN_H


using namespace std;


class Human {
public:
    string Name;
    int Age;
    virtual void SetInfo(string Name, int Age) {
        this->Name = Name;
        this->Age = Age;
    }

    virtual void GetInfo() {
        printf("Name: %s  Age: %i \n", Name.c_str(), Age);
    }
};


#endif //SCHOOL_PROJECT_HUMAN_H
