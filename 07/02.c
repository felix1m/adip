#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[30];
  float note;
} Student;


void printBestGrade(Student* students, unsigned int len) {
  float max = 5.;
  float tmp;
  for (int i = 0; i < len; ++i)
  {
    tmp = students[i].note;
    if (tmp < max) {
      max = tmp;
    }
  }

  printf("Beste note: \n");

  for (int i = 0; i < len; ++i) {
    tmp = students[i].note;
    if (tmp == max) {
      printf("Name: %s, Note: %f \n", students[i].name, students[i].note);
    }
  }
}

float averageGrade(Student* students, unsigned int len) {
  double sum = 0;

  for (int i = 0; i < len; ++i) {
    sum += students[i].note;
  }

  return sum / len;
}

int main(int argc, char *argv[]) {
  unsigned int numStudents;

  printf("Anzahl studenten:\n");
  scanf("%d", &numStudents);

  Student* students = malloc(numStudents * sizeof(Student));
  for (int i = 0; i < numStudents; ++i) {
    char name[30];
    float note;

    printf("Name eingeben:\n");
    scanf("%s", name);

    printf("Note eingeben:\n");
    scanf("%f", &note);

    while (note < 1.0 || note > 5.0) {
      printf("Ungültige note!\n");
      printf("Note eingeben:\n");
      scanf("%f", &note);
    }

    students[i].note=note;
    strcpy(students[i].name, name);
  }

  printBestGrade(students, numStudents);

  printf("Durchschnittsnote: %f\n", averageGrade(students, numStudents));

  free(students);

  return 0;
}
