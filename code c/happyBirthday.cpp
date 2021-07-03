#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

/* function declaration */
void birthday(person * p);

void birthday(person * p){
    p->age++; // This is the same..	
    //(*p).age++; // ... as this would be
}

int main() {
  person john;
  john.name = "Quynh";
  john.age = 18;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}