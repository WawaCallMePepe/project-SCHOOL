
#ifndef PROJECT_SCHOOL_TEACHER_H
#define PROJECT_SCHOOL_TEACHER_H


class Teacher : public Human {
private:
    int Salary;
    string Subject;

public:
    int Exist;
    Teacher(){
        Exist = 0;
    }

    Teacher(string Name, int Age, string Subject, int Salary){
        this->Name = Name;
        this->Age = Age;
        this->Subject = Subject;
        this->Salary = Salary;
        Exist = 1;
    }

    void SetMark(Student *Student) {
        if (Student->Homework == 1) {
            Student->SetMarks(Subject, (rand() % 4 + 2));
        }
        if (Student->Homework == 0) {
            Student->SetMarks(Subject, 2);
        }
    }

    void GetInfo() override {
        printf("Name: %s \n - Age: %i \n", Name.c_str(), Age);
        printf(" - Subject: %s \n - Salary: %i \n\n", Subject.c_str(), Salary);
    }

    ~Teacher() {};
};


#endif //PROJECT_SCHOOL_TEACHER_H
