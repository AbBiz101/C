#include<stdio.h>
#include<stdlib.h>

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
     strcpy(student1.name, "student");
     strcpy(student1.major, "major");

     struct Student student2;
     student2.age =25 ;
     student2.gpa = 4,5;
     strcpy(student2.name, "student");
     strcpy(student2.major, "major");
     
     printf("hallo");
     return 0;
}
