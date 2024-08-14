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
 int max=arr[0];
 for(i=1;i<n;i++){
 	if(arr[i]>max)
 	max=arr[i];
 }
 printf("\nThe maximum Array Element is %d:- ",max);
 int min=arr[0];
 for(i=1;i<n;i++){
 	if(arr[i]<min)
 	min=arr[i];
 }
 printf("\nThe minimum Array Element is %d:- ",min);
 
}
