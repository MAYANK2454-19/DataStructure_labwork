#include <stdio.h>
#include <string.h>
struct student{
    char name[20] ;
    int roll_no ;
    int marks ;

};

void main(){
    struct student s1 ;
    printf("Enter your name : \n");
    scanf("%s",&s1.name);
    printf("Enter your roll number : \n");
    scanf("%d",&s1.roll_no);
    printf("Enter your total marks : \n");
    scanf("%d", &s1.marks);
    printf("Name : %s \n", s1.name);
    printf("Roll number : %d \n",s1.roll_no);
    printf("Marks : %d \n",s1.marks);
}