#include <stdio.h>
void main(){
	int n ,i ,j,k,p;
	printf("Enter size of array : ");
	scanf("%d",&n);
		printf("Enter index of insertion : ");
	scanf("%d",&k);
		printf("Enter value of insertion : ");
	scanf("%d",&p);
	int a[n];
	printf("Enter %d elements for array : \n",n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	printf("Initial array : \n");
	for(int i = 0 ; i < n ; i ++){
         printf("%d ",a[i]);
		}  
		printf("\n");
		//inserting element
// 		 int temp = a[n-1];
// 		 printf("%d\n",temp);
     for(int i = n ; i > k ; i--){
        
         a[i]=a[i-1];
         
         	
		} 
	     
		a[k]=p;
// 		a[n]=temp;
		
	 printf("new array : \n");
     for(int i = 0 ; i <= n ; i ++){
         printf("%d ",a[i]);
        
         	
		
		}   

	
}