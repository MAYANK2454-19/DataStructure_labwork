#include <stdio.h>
#include <stdlib.h>
struct node {
    int val;
    int * ptr;
} *head = NULL;
typedef struct node n ;
int main(){
       n s ;
       int p,v;
       n * temp;
   printf("Enter number of nodes you would like to add : \n" );
   scanf("%d",&p);
   for (int i = 0 ; i < p ; i ++){
    temp = (n*) malloc(sizeof(struct node));
    if(temp==NULL)
    {printf("memory not allocated");
    exit(0);}
    printf("Enter value : \n");
    scanf("%d",&v);
     temp -> val = v; 
     head = temp ;
     temp -> ptr = head ; 
   }
    while(temp != NULL){
        printf("%d ", temp->val);
        temp=temp->ptr;
    }

}