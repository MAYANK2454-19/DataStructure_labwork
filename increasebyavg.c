#include <stdio.h>
void main(){
	int n ,i ,j,odd_sum=0,even_sum=0,sum=0,avg=0;
    int diff1,dif2,p,k;
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
         sum+=a[i];
		}  
		printf("\n");
		avg = sum/n;
        printf("enter element at index 3 :");
        scanf("%d ",p);
        printf("enter element at index 5:");
        scanf("%d ",k);
        dif1=a[3]-
		//inserting element
// 		 int temp = a[n-1];
// 		 printf("%d\n",temp);
//      for(int i = 0 ; i < n ; i++){
        
//         if(i%2==0){
//             even_sum += a[i];
//         }
//          else 
//          odd_sum += a[i];
         	
// 		} 
// 		int diff = odd_sum - even_sum;
// 		if (diff>0){
// 		    printf("The difference of sum of value at odd index and even index is %d",diff);
// 		}
// 	     else{
// 	         printf("The difference of sum of value at odd index and even index is %d",diff*(-1));
// 	     }
// 		a[k]=p;
// 		a[n]=temp;
		
	    

	
}