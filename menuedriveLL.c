// // Online C compiler to run C program online
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int val;
//     struct node * ptr;
// }*head = NULL;
// typedef struct node n;
// void insertatposition(int val,int pos){
//     n * temp = (n*) malloc(sizeof(n));
//     if (temp==NULL){
//        printf("memory not allocated \n");
//        exit(0);
//     }
//     temp -> val = val;
//     if (head == NULL) { 
//         head = temp;  
//         exit(0);
//     }
   
//      n *now = head; 
//     for(int i =0 ; i < pos && now !=NULL ; i++) 
//     { now = now->ptr; 
        
//     } 
//     if (now == NULL)
//     { printf("Position out of range\n");
//     free(temp); 
//     return; } 
//     temp->ptr = now->ptr; 
//     now->ptr = temp; }  

// void display (){
//     n* temp = head;
//     while(temp != NULL){
//         printf("%d ", temp->val);
//         temp=temp->ptr;
//     }
//     printf("NULL\n");
// }
// int main() {
//     int a,val,pos;
//     printf("Enter value : \n");
//     scanf("%d",&a);
//    printf("Enter position: "); 
//    scanf("%d", &pos);
//    insertatposition(val, pos);
        
    
// printf("Linked List after insertion at position %d :\n", pos); 
// display();
//     return 0;
// }
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
    int a,val,pos,c;
    printf("1. insert at begin \n2. insert at end \n3. insert at pos \n");
    printf("Enter choice\n");
    scanf("%d",&c);
    switch(c){
        case 1 :
       printf("Enter the value for node \n");
       scanf("%d",&val);
       insertbegin(val);
        break;
        case 2 :
        printf("Enter the value for node \n");
       scanf("%d",&val);
       insertend(val);
       break ;
        
    }
   printf("Linked List after insertion :\n"); 
display();
    return 0;
    }