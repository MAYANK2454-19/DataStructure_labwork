#include <stdio.h>
void main(){
	int n ,i ,j,odd_sum=0,even_sum=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
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
     for(int i = 0 ; i < n ; i++){
        
        if(i%2==0){
            even_sum += a[i];
        }
         else 
         odd_sum += a[i];
         	
		} 
		int diff = odd_sum - even_sum;
		if (diff>0){
		    printf("The difference of sum of value at odd index and even index is %d",diff);
		}
	     else{
	         printf("The difference of sum of value at odd index and even index is %d",diff*(-1));
	     }
// 		a[k]=p;
// 		a[n]=temp;
		
// 	 printf("new array : \n");
//      for(int i = 0 ; i <= n ; i ++){
//          printf("%d ",a[i]);
        
         	
		
// 		}   

	
}