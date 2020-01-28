#include <stdio.h>
#include <string>
#include <time.h>

using namespace std;

#include "class_Human.h"
#include "class_Student.h"
#include "class_Teacher.h"
#include "class_Administrator.h"

int main() {
    Administrator adm;

    string Name;
    int Age;
    string Subject;
    int Salary;
    int Type;

    int Choice = 1;
    while (Choice != 0) {

        printf("\nEnter number from 0 to 5:\n\
            0) EXIT \n\
            1) Add Student \n\
            2) Add Teacher \n\
            3) Delete Student \n\
            4) Dalete Teacher \n\
            5) Get Info \n\
            \n>");
        scanf("%i", &Choice);

        switch (Choice) {
            case 0: {
                break;
            }

            case 1: {
                printf("Enter <Name> <Age>\n");
                scanf("%s %i", &Name, &Age);
                adm.AddStudent(Name, Age);
                break;
            }

            case 2: {
                printf("Enter <Name> <Age> <Subject> <Salary>\n");
                scanf("%s %i %s %i", &Name, &Age, &Subject, &Salary);
                adm.AddTeacher(Name, Age, Subject, Salary);
                break;
            }

            case 3: {
                printf("Enter <Name> \n");
                scanf("%s", &Name);
                adm.DeleteStudent(Name);
                break;
            }

            case 4: {
                printf("Enter <Name> \n");
                scanf("%s", &Name);
                adm.DeleteTeacher(Name);
                break;
            }

            case 5: {
                printf("Enter <Type> (Students/Teachers)\n");
                scanf("%i", &Type);
                adm.GetInfo(Type);
                break;
            }
        }
    }
    return 0;
}
