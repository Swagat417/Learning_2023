#include <stdio.h>

int main() {
  int roll_no;
  char name[100];
  float physics_marks, math_marks, chemistry_marks;

  printf("Enter the roll number: ");
  scanf("%d", &roll_no);

  printf("Enter the full name of the student (including initials): ");
  fgets(name, sizeof(name), stdin);

  printf("Enter the marks for Physics, Math and Chemistry: ");
  scanf("%f %f %f", &physics_marks, &math_marks, &chemistry_marks);

  float total_marks = physics_marks + math_marks + chemistry_marks;
  float percentage = total_marks / 3 * 100;

  printf("Roll number: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Total marks: %.2f\n", total_marks);
  printf("Percentage: %.2f%%\n", percentage);

  return 0;
}

