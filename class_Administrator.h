
#ifndef SCHOOL_PROJECT_ADMINISTRATOR_H
#define SCHOOL_PROJECT_ADMINISTRATOR_H


class Administrator : private Human {
private:

    int StudentQuantity = 0;
    int TeacherQuantity = 0;

    Student Students[30];
    Teacher Teachers[10];

public:
    Administrator(){
    };

    void AddStudent(string Name, int Age) {
        Students[StudentQuantity] = Student(Name, Age);
        StudentQuantity += 1;
        printf("Student Added\n");
    }

    void AddTeacher(string Name, int Age, string Subject, int Salary) {
        Teachers[TeacherQuantity] = Teacher(Name, Age, Subject, Salary);
        TeacherQuantity += 1;
        printf("Teacher Added\n");
    }

    void DeleteStudent(string Name){
        for (int i = 0; i < StudentQuantity; ++i) {
            if (Students[i].Name == Name and Students[i].Exist == 1){
                Students[i].Exist = 0;
                StudentQuantity -= 1;
            }
        }
    }

    void DeleteTeacher(string Name){
        for (int i = 0; i < TeacherQuantity; ++i) {
            if (Teachers[i].Name == Name and Teachers[i].Exist == 1){
                Teachers[i].Exist = 0;
                TeacherQuantity -= 1;
            }
        }
    }

    void GetInfo(int Type) {
        printf("\n");
        if (Type == 1 and TeacherQuantity != 0) {
            for (int i = 0; i < TeacherQuantity; ++i) {
                if (Teachers[i].Exist == 1) {
                    Teachers[i].GetInfo();
                }
            }
        }
        if (Type == 2 and StudentQuantity != 0) {
            for (int i = 0; i < StudentQuantity; ++i) {
                if (Students[i].Exist == 1) {
                    Students[i].GetInfo();
                }
            }
        } else {
            printf("Wrong variable 'Type' or empty list of students/teachers\n");
        }

    }


    ~Administrator() {
        printf("Goodbye!");

    };
};


#endif //SCHOOL_PROJECT_ADMINISTRATOR_H
