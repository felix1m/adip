#include <stdio.h>
#include <stdlib.h>



typedef struct {
  char nachname[30];
  float note;
} Student;


Student *createStudent(char nachname, float note){
  struct Student *tmp;
    tmp = malloc(sizeof(Student));
    if (tmp == NULL) {
      printf("no memory!\n");
      return NULL;
    }

    if (note < 1.0 || note > 5.0) {
      printf("Ungültige note!\n");
      return NULL;
    }

    tmp->nachname = nachname;
    tmp->note = note;

    return tmp;
}


int main(int argc, char *argv[]) {
    unsigned int numStudents;

    printf("Enter number of students:");
    scanf("%d", &numStudents);

    Student* students = malloc(numStudents * sizeof *Student);
    for (int i = 0; i < numStudents; ++i)
    {
      printf("Enter Name:");
      char *name = NULL;
      int read;
      unsigned int len;
      float grade;

      read = getline(&name, &len, stdin);
      while (-1 == read)
          printf("No line read...\n");
          read = getline(&name, &len, stdin);

      printf("Enter Grade:");
      scanf("%f", &grade);

      students[i] = createStudent()
    }

    free(students);
    return 0;
}
