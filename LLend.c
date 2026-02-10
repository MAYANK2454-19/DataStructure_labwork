// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node {
    int val;
    struct node * ptr;
}*head = NULL;
typedef struct node n;
void insertend(int val){
    n * temp = (n*) malloc(sizeof(n));
    if (temp==NULL){
       printf("memory not allocated \n");
       exit(0);
    }
    temp -> val = val;
    temp -> ptr = NULL ;
    if (head == NULL) { 
        head = temp;  
        
    }
    else 
    { n *last = head; 
    while (last->ptr != NULL) 
    { last = last->ptr; 
        
    } 
    last->ptr = temp;  } }

void display (){
    n* temp = head;
    while(temp != NULL){
        printf("%d ", temp->val);
        temp=temp->ptr;
    }
    printf("NULL\n");
}
int main() {
    int a,val;
    printf("Enter number of nodes you want to create : \n");
    scanf("%d",&a);
    for (int i = 0 ; i < a ; i++){
       printf("Enter the value for node %d\n",i+1);
       scanf("%d",&val);
       insertend(val);
        
    }
printf("Linked List after insertion at end:\n"); 
display();
    return 0;
}