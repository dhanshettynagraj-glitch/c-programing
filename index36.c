#include<stdio.h>
struct student{
    int id;
    char name [20];
};

void display(struct student*s){
printf("ID:%d\n",s->id);
printf("name:%s\n",s->name);        
}
int main()
{
    struct student s1={101,"Anu"};
    struct student s2={102,"rabi"};
    display(&s1);
    display(&s2);
    return 0;

}
