#include <stdio.h>
void main(){
	int n ,i ,j,k;
	printf("Enter size of array : ");
	scanf("%d",&n);
		printf("Enter index of deletion : ");
	scanf("%d",&k);
	int a[n];
	printf("Enter %d elements for array : \n",n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	printf("Initial array : \n");
	for(int i = 0 ; i < n ; i ++){
         printf("%d",a[i]);
		}  
		printf("\n");
     for(int i = k ; i < n ; i ++){
         
         a[k]=a[k+1];
         	
		
		} 
		
	 printf("new array : \n");
     for(int i = 0 ; i < n-1 ; i ++){
         printf("%d",a[i]);
        
         	
		
		}   

	
}