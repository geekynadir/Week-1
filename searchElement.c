#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("Enter the values of the Array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]); 
 }
 int a;
 printf("\nEnter the value to be searched in the Array \n");
 scanf("%d",&a);
 for(i=0;i<n;i++){
  if(arr[i]==a){
  	printf("The Element %d is present at index %d",arr[i],i);
  }	
 }
 
}
