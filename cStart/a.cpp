#include<stdio.h>
#include<stdlib.h>
#include <cstring>

struct Student{
     char name[20];
     char major[20];
     int age;
     double gpa;
};

int main()
{
     struct Student student1;
     student1.age =20 ;
     student1.gpa = 3,5;
     strcpy(student1.name, "student1");
     strcpy(student1.major, "major1");

     struct Student student2;
     student2.age =25 ;
     student2.gpa = 4,5;
     strcpy(student2.name, "student2");
     strcpy(student2.major, "major2");
     
     printf("%s", student2.name);
     return 0;
}
