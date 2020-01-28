
#ifndef PROJECT_SCHOOL_STUDENT_H
#define PROJECT_SCHOOL_STUDENT_H


class Student : public Human {
private:
    int ArrayRows = 3;
    int *MarkArraySize = new int[ArrayRows]{3, 3, 3};
    string *Subjects = new string[ArrayRows]{"Maths", "Phisics", "IT"};
    int **Marks = new int *[ArrayRows];


    void DoHomework() {
        srand(time(0));
        int Booleanvalue = rand() % 2;
        Homework = Booleanvalue;
    }

public:
    int Exist;
    bool Homework;

    Student(string Name, int Age) {

        this->Name = Name;
        this->Age = Age;

        for (int i = 0; i < ArrayRows; ++i) {
            Marks[i] = new int[MarkArraySize[i]];

            for (int j = 0; j < MarkArraySize[i]; j++) {
                int Mark = rand() % 4 + 2;
                Marks[i][j] = Mark;
            }
        }
        Exist = 1;

        DoHomework();
    }

    Student(){
        Exist = 0;
    }



    void SetMarks(string Subject, int Mark) {

        for (int i = 0; i < ArrayRows; i++) {
            if (Subject == Subjects[i]) {

                int *NewArray = new int[MarkArraySize[i] + 1];
                for (int j = 0; j < MarkArraySize[i]; j++) {
                    NewArray[j] = Marks[i][j];
                }

                NewArray[MarkArraySize[i]] = Mark;
                MarkArraySize[i] += 1;
                delete[] Marks[i];
                Marks[i] = NewArray;

            }
        }
    }


    void GetMarks() {

        for (int i = 0; i < ArrayRows; ++i) {
            printf(" - %s : ", Subjects[i].c_str());
            for (int j = 0; j < MarkArraySize[i]; ++j) {
                printf("%i ", Marks[i][j]);
            }
            printf("\n");
        }

    }


    void GetInfo() override {
        printf("Name: %s \nAge: %i \n", Name.c_str(), Age);
        printf("Marks:\n");
        GetMarks();
        printf("\n");
    }

    ~Student() {
        delete[] Subjects;
        for (int i = 0; i < ArrayRows; ++i) {
            delete[] Marks[i];
        }
        delete[] Marks;
    };
};


#endif //PROJECT_SCHOOL_STUDENT_H
