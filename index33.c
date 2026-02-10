#include <stdio.h>  
struct student {
    int id;
    char name[20];
    float marks;
};
int main(){
    struct student s1 = {101, "priya", 85.5};
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);  
    printf("Student Marks: %.2f\n", s1.marks);
    return 0;
}