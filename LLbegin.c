#include <stdio.h>
#include <stdlib.h>
struct node {
    int val;
    struct node * ptr;
}*head = NULL;
typedef struct node n;
void insertbegin(int val){
    n * temp = (n*) malloc(sizeof(n));
    if (temp==NULL){
       printf("memory not allocated \n");
       exit(0);
    }
    temp -> val = val;
    temp -> ptr = head ;
    head = temp;
}
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
       insertbegin(val);
        
    }
printf("Linked List after insertion at beginning:\n"); 
display();
    return 0;
}