#include<stdio.h>
struct Stud{
    int id;
    char name[20];
};
void display(struct Stud s[],int){
    for(int i=0;i<n;i++)
    printf("ID:%d,name:%s\n",s[i].id,s[i].name);      
}
int main()
{
    struct Stud s[3]={{101,"Anu"},{102,"Rabi"},{103,"Kiran"}};
    display(s,3);
    return 0;

} 

