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

    tmp->nachname = nachname;
    tmp->note = note;

    return tmp;
}


void printBestGrade(Student* students, unsigned int len) {
  float max = 5.;
  float tmp;
  for (int i = 0; i < len; ++i)
  {
    tmp = students[i]->note;
    if (tmp < max) {
      max = tmp;
    }
  }

  print("Beste note: \n");

  for (int i = 0; i < len; ++i)
  {
    tmp = students[i]->note;
    if (tmp == max) {
      printf("Name: %s, Note: %f \n", students[i]->nachname, students[i]->grade);
    }
  }
}

void averageGrade(Student* students, unsigned int len) {

  double sum = 0;

  for (int i = 0; i < len; ++i)
  {
    sum += students[i]->note;
  }

  return sum / len;

}

int main(int argc, char *argv[]) {
    unsigned int numStudents;

    printf("Anzahl studenten:\n");
    scanf("%d", &numStudents);

    Student* students = malloc(numStudents * sizeof *Student);
    for (int i = 0; i < numStudents; ++i)
    {
      printf("Enter Name:\n");
      char *name = NULL;
      int read;
      unsigned int len;
      float note;

      printf("Name eingeben:\n");

      read = getline(&name, &len, stdin);
      while (-1 == read)
          printf("No line read...\n");
          read = getline(&name, &len, stdin);

      printf("Note eingeben:\n");
      scanf("%f", &note);

      while (note < 1.0 || note > 5.0) {
        printf("Ungültige note!\n");
        printf("Note eingeben:\n");
        scanf("%f", &note);
      }

      students[i] = createStudent();

      while (!students[i])
          printf("No line read...\n");
          read = getline(&name, &len, stdin);

      students[i] = createStudent();
    }

    printBestGrade(students, numStudents);

    printf("Durchschnittsnote: %f\n", averageGrade(students, numStudents));

    free(students);
    return 0;
}
