#include <stdio.h>
#include <string.h>
struct student{
    int roll_no ;
    char first_name[10] ;
    char last_name[10] ;
     
};

void main(){
    struct student s[5] , temp ;
    
  
  
    for(int i = 0 ; i < 5 ; i++){
       
        printf("Enter first name of student %d \n", i+1);
        scanf("%s", s[i].first_name);
        printf("Enter last name of student %d \n", i+1);
        scanf("%s", s[i].last_name);
        printf("Enter roll number of student %d \n", i+1);
        scanf("%d", &s[i].roll_no);
        printf("\n");
    }
    printf("Roll no  First name  Last name\n");
    for(int i = 0 ; i < 5 ; i++){
       for(int j= 0 ;j < 5 ;j++){
           if(s[i].roll_no > s[5-1-i].roll_no){
               temp = s[i];
           }
           printf("%d  %s  %s \n", temp.roll_no , temp.first_name , temp.last_name);
       }
    }
    
}
