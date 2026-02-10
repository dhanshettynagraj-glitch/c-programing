#include<stdio.h>
#include<string.h>
struct Book {
    char title[50];
    char author[50];
};
int main(){
    struct Book b1={101, "C Programming", "Dennis Ritchie"};
    struct Book b2={102, "data structure", "Mark Allen Weiss"};
    struct Book b3={103,"operating system","Silberschatz"};

    struct Book*books[3]={&b1,&b2,&b3};
    int searchID,i,found=0;
    printf("Enter book ID to search: ");
    scanf("%d",&searchID);
    for(i=0;i<3;i++){
        if(books[i]->id==searchID){
            printf("\nBook Found:\n");
            printf("ID: %d\n",books[i]->id);    
            printf("Title: %s\n",books[i]->title);    
            printf("Author: %s\n",books[i]->author);
            found=1;
            break;
        }
    }
}         